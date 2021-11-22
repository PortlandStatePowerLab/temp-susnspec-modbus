#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"

namespace sunspec
{

    struct Split_phase_radian_inverter_real_time : public Block // Block 64115
    {
      Split_phase_radian_inverter_real_time();
      ~Split_phase_radian_inverter_real_time();

      private:

        Point<uint16_t>GS_Split_Port_number;
        Point<uint16_t>GS_Split_DC_Voltage_SF;
        Point<uint16_t>GS_Split_AC_Current_SF;
        Point<int16_t>GS_Split_AC_Voltage_SF;
        Point<int16_t>GS_Split_AC_Frequency_SF;
        Point<int16_t>GS_Split_L1_Inverter_Output_Current;
        Point<int16_t>GS_Split_L1_Inverter_Charge_Current;
        Point<int16_t>GS_Split_L1_Inverter_Buy_Current;
        Point<int16_t>GS_Split_L1_Inverter_Sell_Current;
        Point<int16_t>GS_Split_L1_Grid_Input_AC_Voltage;
        Point<int16_t>GS_Split_L1_Gen_Input_AC_Voltage;
        Point<int16_t>GS_Split_L1_Output_AC_Voltage;
        Point<int16_t>GS_Split_L2_Inverter_Output_Current;
        Point<int16_t>GS_Split_L2_Inverter_Charge_Current;
        Point<int16_t>GS_Split_L2_Inverter_Buy_Current;
        Point<int16_t>GS_Split_L2_Inverter_Sell_Current;
        Point<int16_t>GS_Split_L2_Grid_Input_AC_Voltage;
        Point<int16_t>GS_Split_L2_Gen_Input_AC_Voltage;
        Point<int16_t>GS_Split_L2_Output_AC_Voltage;
        Point<int16_t>GS_Split_Inverter_Operating_mode;
        Point<int16_t>GS_Split_Error_Flags;
        Point<int16_t>GS_Split_Warning_Flags;
        Point<int16_t>GS_Split_Battery_Voltage;
        Point<int16_t>GS_Split_Temp_Compensated_Target_Voltage;
        Point<int16_t>GS_Split_AUX_Output_State;
        Point<int16_t>GS_Split_AUX_Relay_Output_State;
        Point<int16_t>GS_Split_L_Module_Transformer_Temperature;
        Point<int16_t>GS_Split_L_Module_Capacitor_Temperature;
        Point<int16_t>GS_Split_L_Module_FET_Temperature;
        Point<int16_t>GS_Split_R_Module_Transformer_Temperature;
        Point<int16_t>GS_Split_R_Module_Capacitor_Temperature;
        Point<int16_t>GS_Split_R_Module_FET_Temperature;
        Point<int16_t>GS_Split_Battery_Temperature;
        Point<int16_t>GS_Split_AC_Input_Selection;
        Point<int16_t>GS_Split_AC_Input_Frequency;
        Point<int16_t>GS_Split_AC_Input_Voltage;
        Point<int16_t>GS_Split_AC_Input_State;
        Point<int16_t>GS_Split_Minimum_AC_Input_Voltage;
        Point<int16_t>GS_Split_Maximum_AC_Input_Voltage;
        Point<int16_t>GS_Split_Sell_Status;
        Point<int16_t>GS_Split_kWh_SF;
        Point<uint16_t>GS_Split_AC1_L1_Buy_kWh;
        Point<uint16_t>GS_Split_AC2_L1_Buy_kWh;
        Point<uint16_t>GS_Split_AC1_L1_Sell_kWh;
        Point<uint16_t>GS_Split_AC2_L1_Sell_kWh;
        Point<uint16_t>GS_Split_L1_Output_kWh;
        Point<uint16_t>GS_Split_AC1_L2_Buy_kWh;
        Point<uint16_t>GS_Split_AC2_L2_Buy_kWh;
        Point<uint16_t>GS_Split_AC1_L2_Sell_kWh;
        Point<uint16_t>GS_Split_AC2_L2_Sell_kWh;
        Point<uint16_t>GS_Split_L2_Output_kWh;
        Point<uint16_t>GS_Split_Charger_kWh;
        Point<uint16_t>GS_Split_Output_kW;
        Point<uint16_t>GS_Split_Buy_kW;
        Point<uint16_t>GS_Split_Sell_kW;
        Point<uint16_t>GS_Split_Charge_kW;
        Point<uint16_t>GS_Split_Load_kW;
        Point<uint16_t>GS_Split_AC_Couple_kW;
    };

}
