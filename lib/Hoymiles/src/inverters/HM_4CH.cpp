#include "HM_4CH.h"

HM_4CH::HM_4CH(uint64_t serial)
    : HM_Abstract(serial) {};

bool HM_4CH::isValidSerial(uint64_t serial)
{
    int16_t prefix = serial >> 32;
    return (prefix == 0x1161) || (prefix == 0x1382);
}

String HM_4CH::typeName()
{
    if ((this->serial() >> 32) == 0x1382) {
        return String(F("HM-1800?"));
    } else {
        return String(F("HM-1200, HM-1500"));
    }
}

const byteAssign_t* HM_4CH::getByteAssignment()
{
    return byteAssignment;
}

const uint8_t HM_4CH::getAssignmentCount()
{
    return sizeof(byteAssignment) / sizeof(byteAssign_t);
}