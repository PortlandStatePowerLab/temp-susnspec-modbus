#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"


namespace sunspec
{

    struct Single_Phase_Radian_Inverter_Real_Time_Block : public Block // Block 64117
    {
        Single_Phase_Radian_Inverter_Real_Time_Block();
        ~Single_Phase_Radian_Inverter_Real_Time_Block();

    private:

        Point<uint16_t>GS_Single_Port_number;
        Point<int16_t>GS_Single_DC_Voltage_SF;
        Point<int16_t>GS_Single_AC_Current_SF;
        Point<int16_t>GS_Single_AC_Voltage_SF;
        Point<int16_t>GS_Single_AC_Frequency_SF;
        Point<uint16_t>GS_Single_Inverter_Output_Current;
        Point<uint16_t>GS_Single_Inverter_Charge_Current;
        Point<uint16_t>GS_Single_Inverter_Buy_Current;
        Point<uint16_t>GS_Single_Inverter_Sell_Current;
        Point<uint16_t>GS_Single_Grid_Input_AC_Voltage;
        Point<uint16_t>GS_Single_Gen_Input_AC_Voltage;
        Point<uint16_t>GS_Single_Output_AC_Voltage;
        Point<uint16_t>GS_Single_Inverter_Operating_mode;
        Point<uint16_t>GS_Single_Error_Flags;
        Point<uint16_t>GS_Single_Warning_Flags;
        Point<uint16_t>GS_Single_Battery_Voltage;
        Point<uint16_t>GS_Single_Temp_Compensated_Target_Voltage;
        Point<uint16_t>GS_Single_AUX_Output_State;
        Point<uint16_t>GS_Single_AUX_Relay_Output_State;
        Point<uint16_t>GS_Single_L_Module_Transformer_Temperature;
        Point<uint16_t>GS_Single_L_Module_Capacitor_Temperature;
        Point<uint16_t>GS_Single_L_Module_FET_Temperature;
        Point<uint16_t>GS_Single_R_Module_Transformer_Temperature;
        Point<uint16_t>GS_Single_R_Module_Capacitor_Temperature;
        Point<uint16_t>GS_Single_R_Module_FET_Temperature;
        Point<uint16_t>GS_Single_Battery_Temperature;
        Point<uint16_t>GS_Single_AC_Input_Selection;
        Point<uint16_t>GS_Single_AC_Input_Frequency;
        Point<uint16_t>GS_Single_AC_Input_Voltage;
        Point<uint16_t>GS_Single_AC_Input_State;
        Point<uint16_t>GS_Single_Minimum_AC_Input_Voltage;
        Point<uint16_t>GS_Single_Maximum_AC_Input_Voltage;
        Point<uint16_t>GS_Single_Sell_Status;
        Point<int16_t>GS_Single_kWh_SF;
        Point<uint16_t>GS_Single_AC1_Buy_kWh;
        Point<uint16_t>GS_Single_AC2_Buy_kWh;
        Point<uint16_t>GS_Single_AC1_Sell_kWh;
        Point<uint16_t>GS_Single_AC2_Sell_kWh;
        Point<uint16_t>GS_Single_Output_kWh;
        Point<uint16_t>GS_Single_Charger_kWh;
        Point<uint16_t>GS_Single_Output_kW;
        Point<uint16_t>GS_Single_Buy_kW;
        Point<uint16_t>GS_Single_Sell_kW;
        Point<uint16_t>GS_Single_Charge_kW;
        Point<uint16_t>GS_Single_Load_kW;
        Point<uint16_t>GS_Single_AC_Couple_kW;
    };
}