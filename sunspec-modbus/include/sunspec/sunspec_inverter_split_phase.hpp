#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"

namespace sunspec
{
    struct SunSpec_Inverter_Split_Phase : public Block // Block 102
    {
        SunSpec_Inverter_Split_Phase();
        ~SunSpec_Inverter_Split_Phase();

    private:

    Point<uint16_t>I_AC_Current;
    Point<uint16_t>I_AC_CurrentA;
    Point<uint16_t>I_AC_CurrentB;
    Point<uint16_t>I_AC_CurrentC;
    Point<int16_t>I_AC_Current_SF;
    Point<uint16_t>I_AC_VoltageAB;
    Point<uint16_t>I_AC_VoltageBC;
    Point<uint16_t>I_AC_VoltageCA;
    Point<uint16_t>I_AC_VoltageAN;
    Point<uint16_t>I_AC_VoltageBN;
    Point<uint16_t>I_AC_VoltageCN;
    Point<int16_t>I_AC_Voltage_SF;
    Point<int16_t> I_AC_Power;
    Point<int16_t>I_AC_Power_SF;
    Point<uint16_t>I_AC_Frequency;
    Point<int16_t>I_AC_Frequency_SF;
    Point<int16_t>I_AC_VA;
    Point<int16_t>I_AC_VA_SF;
    Point<int16_t>I_AC_VAR;
    Point<int16_t>I_AC_VAR_SF;
    Point<int16_t>I_AC_PF;
    Point<int16_t>I_AC_PF_SF;
    Point<uint32_t>I_AC_Energy_WH;
    Point<uint16_t>I_AC_Energy_WH_SF;
    Point<uint16_t>I_DC_Current;
    Point<int16_t>I_DC_Current_SF;
    Point<uint16_t>I_DC_Voltage;
    Point<int16_t>I_DC_Voltage_SF;
    Point<int16_t>I_DC_Power;
    Point<int16_t>I_DC_Power_SF;
    Point<int16_t>I_Temp_Cab;
    Point<int16_t>I_Temp_Sink;
    Point<int16_t>I_Temp_Trans;
    Point<int16_t>I_Temp_Other;
    Point<int16_t>I_Temp_SF;
    Point<uint16_t>I_Status;
    Point<uint16_t>I_Status_Vendor;
    Point<uint32_t>I_Event_1;
    Point<uint32_t>I_Event_2;
    Point<uint32_t>I_Event_1_Vendor;
    Point<uint32_t>I_Event_2_Vendor;
    Point<uint32_t>I_Event_3_Vendor;
    Point<uint32_t>I_Event_4_Vendor;


    };
}