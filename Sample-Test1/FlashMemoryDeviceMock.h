#pragma once
#include "../Project1/FlashMemoryDevice.h"

class FlashMemoryDeviceMock : FlashMemoryDevice {
public:

    MOCK_METHOD(unsigned char, read, (long address), (override));
    MOCK_METHOD(void, write, (long address, unsigned char data), (override));
};
