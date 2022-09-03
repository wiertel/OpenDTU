#pragma once

#include "HM_Abstract.h"

class HM_6CH : public HM_Abstract {
public:
    HM_6CH(uint64_t serial);
    static bool isValidSerial(uint64_t serial);
    String typeName();
    const byteAssign_t* getByteAssignment();
    const uint8_t getAssignmentCount();

private:
    const byteAssign_t byteAssignment[48] = {
        { FLD_UDC, UNIT_V, CH1, 2, 2, 10 },
        { FLD_IDC, UNIT_A, CH1, 4, 2, 100 },
        { FLD_IDC, UNIT_A, CH2, 6, 2, 100 },
        { FLD_PDC, UNIT_W, CH1, 8, 2, 10 },
        { FLD_PDC, UNIT_W, CH2, 10, 2, 10 },
        { FLD_YT, UNIT_KWH, CH1, 12, 4, 1000 },
        { FLD_YT, UNIT_KWH, CH2, 16, 4, 1000 },
        { FLD_YD, UNIT_WH, CH1, 20, 2, 1 },
        { FLD_YD, UNIT_WH, CH2, 22, 2, 1 },

        { FLD_UDC, UNIT_V, CH3, 24, 2, 10 },
        { FLD_IDC, UNIT_A, CH3, 26, 2, 100 },
        { FLD_IDC, UNIT_A, CH4, 28, 2, 100 },
        { FLD_PDC, UNIT_W, CH3, 30, 2, 10 },
        { FLD_PDC, UNIT_W, CH4, 32, 2, 10 },
        { FLD_YT, UNIT_KWH, CH3, 34, 4, 1000 },
        { FLD_YT, UNIT_KWH, CH4, 38, 4, 1000 },
        { FLD_YD, UNIT_WH, CH3, 42, 2, 1 },
        { FLD_YD, UNIT_WH, CH4, 44, 2, 1 },

        { FLD_UDC, UNIT_V, CH5, 46, 2, 10 },
        { FLD_IDC, UNIT_A, CH5, 48, 2, 100 },
        { FLD_IDC, UNIT_A, CH6, 50, 2, 100 },
        { FLD_PDC, UNIT_W, CH5, 52, 2, 10 },
        { FLD_PDC, UNIT_W, CH6, 54, 2, 10 },
        { FLD_YT, UNIT_KWH, CH5, 56, 4, 1000 },
        { FLD_YT, UNIT_KWH, CH6, 60, 4, 1000 },
        { FLD_YD, UNIT_WH, CH5, 64, 2, 1 },
        { FLD_YD, UNIT_WH, CH6, 66, 2, 1 },

        { FLD_UAC, UNIT_V, CH0, 68, 2, 10 },
        { FLD_F, UNIT_HZ, CH0, 70, 2, 100 },
        { FLD_PAC, UNIT_W, CH0, 72, 2, 10 },
        { FLD_PRA, UNIT_VA, CH0, 74, 2, 10 },
        { FLD_IAC, UNIT_A, CH0, 76, 2, 100 },
        { FLD_PCT, UNIT_PCT, CH0, 78, 2, 10 },
        { FLD_T, UNIT_C, CH0, 80, 2, 10 },
        { FLD_EVT_LOG, UNIT_CNT, CH0, 82, 2, 1 },

        { FLD_IRR, UNIT_PCT, CH1, CALC_IRR_CH, CH1, CMD_CALC },
        { FLD_IRR, UNIT_PCT, CH2, CALC_IRR_CH, CH2, CMD_CALC },
        { FLD_IRR, UNIT_PCT, CH3, CALC_IRR_CH, CH3, CMD_CALC },
        { FLD_IRR, UNIT_PCT, CH4, CALC_IRR_CH, CH4, CMD_CALC },
        { FLD_IRR, UNIT_PCT, CH5, CALC_IRR_CH, CH5, CMD_CALC },
        { FLD_IRR, UNIT_PCT, CH6, CALC_IRR_CH, CH6, CMD_CALC },
        { FLD_UDC, UNIT_V, CH2, CALC_UDC_CH, CH1, CMD_CALC },
        { FLD_UDC, UNIT_V, CH4, CALC_UDC_CH, CH3, CMD_CALC },
        { FLD_UDC, UNIT_V, CH6, CALC_UDC_CH, CH5, CMD_CALC },

        { FLD_YD, UNIT_WH, CH0, CALC_YD_CH0, 0, CMD_CALC },
        { FLD_YT, UNIT_KWH, CH0, CALC_YT_CH0, 0, CMD_CALC },
        { FLD_PDC, UNIT_W, CH0, CALC_PDC_CH0, 0, CMD_CALC },
        { FLD_EFF, UNIT_PCT, CH0, CALC_EFF_CH0, 0, CMD_CALC },
    };
};