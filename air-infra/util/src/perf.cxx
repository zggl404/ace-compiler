//-*-c++-*-
//=============================================================================
//
// Copyright (c) Ant Group Co., Ltd
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//=============================================================================

#include "air/util/perf.h"

#include "config.h"
#include "json/json.h"

namespace air {
namespace util {

class REPORT {
public:
  REPORT(TFILE& trace, TFILE& perf) : _tfile(trace), _pfile(perf), _index(0) {
    Json::Value node;

    node["library_version"]    = Json::Value(LIBRARY_BUILD_VERSION);
    node["library_build_type"] = Json::Value(LIBRARY_BUILD_TYPE);
    node["library_build_date"] = Json::Value(LIBRARY_BUILD_TIMESTAMP);
    // TODO: Future add system env info
    // node["num_cpus"] = 4;
    // node["parallel"] = 4;
    // ...

    _report["context"] = node;
  };

  //! @brief Store data to trace | perf file
  ~REPORT(void) {
    Dump_trace();
    Dump_perf();
  }

  void Add_node(std::string driver, std::string phase, std::string pass,
                double delta, double total) {
    Json::Value node;

    node["index"]       = _index++;
    node["driver_name"] = Json::Value(driver);
    node["phase_name"]  = Json::Value(phase);
    node["pass_name"]   = Json::Value(pass);

    // delta/total time
    node["phase_time"] = delta;
    node["cpu_time"]   = total;
    node["time_unit"]  = "s";

    // node["mem_size"] = ;    // TODO : Future completion

    _report["performace"].append(Json::Value(node));
  }

  void Print(std::ostream& os, bool rot) const {
    os << _report.toStyledString() << std::endl;
  }

  void Print() const { Print(std::cout, true); }

private:
  void Dump_trace() const {
    std::ostream& os = _tfile.Tfile();
    for (Json::ArrayIndex i = 0; i < _report["performace"].size(); ++i) {
      const Json::Value& node   = _report["performace"][i];
      std::string        driver = node["driver_name"].asString();
      std::string        phase  = node["phase_name"].asString();
      std::string        pass   = node["pass_name"].asString();
      std::string        unit   = node["time_unit"].asString();
      double             delta  = node["phase_time"].asDouble();
      double             total  = node["cpu_time"].asDouble();

      Templ_print(os, "[%s][%s][%s] : phase_time = %s / %s(%s)", driver, phase,
                  pass, delta, total, unit);
    }
    os.flush();
  }

  void Dump_perf() const {
    std::ostream& os = _pfile.Tfile();
    os << _report.toStyledString() << std::endl;
    os.flush();
  }

  TFILE&      _tfile;   // Trace file
  TFILE&      _pfile;   // Perf file
  Json::Value _report;  // json data
  uint32_t    _index;
};

PERF::PERF(TFILE& trace, TFILE& perf)
    : _tfile(trace), _pfile(perf), _init(clock()) {
  _data = new REPORT(trace, perf);

  _start = _init;
}

PERF::~PERF(void) {
  AIR_ASSERT(_data != nullptr);
  delete _data;
}

void PERF::Taken(std::string driver, std::string phase, std::string pass) {
  double  delta, total;
  clock_t curr = clock();

  curr  = clock();
  delta = ((double)(curr - Get_clock_start())) / CLOCKS_PER_SEC;
  total = ((double)(curr - Get_clock_init())) / CLOCKS_PER_SEC;

  // Add_perf(driver, phase, pass, delta, total);
  _data->Add_node(driver, phase, pass, delta, total);

  // for Simplified call
  Set_clock_start(curr);
}

void PERF::Print(std::ostream& os, bool rot) const { _data->Print(os, rot); }

void PERF::Print() const { Print(std::cout, true); }

}  // namespace util
}  // namespace air
