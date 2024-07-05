#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "FlashMemoryDeviceMock.h"

using namespace testing;
using namespace std;

TEST(TestCaseName, CallRead5) {
	FlashMemoryDeviceMock flash_mock;
	EXPECT_CALL(flash_mock, read(0xA)).Times(5);

	flash_mock.read(0xA);
	flash_mock.read(0xA);
	flash_mock.read(0xA);
	flash_mock.read(0xA);
	flash_mock.read(0xA);
}