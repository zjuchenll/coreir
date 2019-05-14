#include <exception>
#include "coreir/common/logging_lite.hpp"
#include "coreir.h"

using namespace CoreIR;

void TestLogInfo() {
  LOG(DEBUG) << "Hello!";
}

void TestLogDebug() {
  LOG(DEBUG) << "Debug Hello!";
  ::common::internal::LogSeverityStore::set_severity(DEBUG);
  LOG(DEBUG) << "Debug Hello!";
}

int main() {
  TestLogInfo();
  TestLogDebug();
}