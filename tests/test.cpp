// Copyright by PanasyukMaria

#include <stdexcept>
#include <thread>

#include <gtest/gtest.h>

TEST(DISABLED_Snapshot, Speen) {
  for (;;) std::this_thread::yield();
}
