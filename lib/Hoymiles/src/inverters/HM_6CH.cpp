#include "HM_6CH.h"

HM_6CH::HM_6CH(uint64_t serial)
    : HM_Abstract(serial) {};

bool HM_6CH::isValidSerial(uint64_t serial)
{
    return (serial >> 32) == 0x1382;
}

String HM_6CH::typeName()
{
    return String(F("HM-1800"));
}

const byteAssign_t* HM_6CH::getByteAssignment()
{
    return byteAssignment;
}

const uint8_t HM_6CH::getAssignmentCount()
{
    return sizeof(byteAssignment) / sizeof(byteAssign_t);
}