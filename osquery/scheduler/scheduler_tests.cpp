// Copyright 2004-present Facebook. All Rights Reserved.

#include <gtest/gtest.h>

#include <osquery/scheduler.h>

class SchedulerTests : public testing::Test {};

TEST_F(SchedulerTests, test) { EXPECT_EQ(true, true); }

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
