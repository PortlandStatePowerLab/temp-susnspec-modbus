#include"include/sunspec/single_phase_radian_inverter_real_time_block.hpp""


using namespace sunspec;

Single_Phase_Radian_Inverter_Real_Time_Block::Single_Phase_Radian_Inverter_Real_Time_Block(/*arguments 64117*/)

{
    id = "1";
    length = 46;
    name = "Single Phase Radian Inverter Real Time Block";
    description = "Vendor Extension 'for' OutBack Radian Series Split Phase Inverter Status Block";

    GS_Single_Port_number.offset = 0;
    GS_Single_Port_number.len = 1;
    GS_Single_Port_number.access = Access::kRead;

    GS_Single_DC_Voltage_SF.offset = 1;
    GS_Single_DC_Voltage_SF.len = 1;
    GS_Single_DC_Voltage_SF.access = Access::kRead;

    GS_Single_AC_Current_SF.offset = 2;
    GS_Single_AC_Current_SF.len = 1;
    GS_Single_AC_Current_SF.access = Access::kRead;

    GS_Single_AC_Voltage_SF.offset = 3;
    GS_Single_AC_Voltage_SF.len = 1;
    GS_Single_AC_Voltage_SF.access = Access::kRead;

    GS_Single_AC_Frequency_SF.offset = 4;
    GS_Single_AC_Frequency_SF.len = 1;
    GS_Single_AC_Frequency_SF.access = Access::kRead;

    GS_Single_Inverter_Output_Current.offset = 5;
    GS_Single_Inverter_Output_Current.len = 1;
    GS_Single_Inverter_Output_Current.units = "Amps";
    GS_Single_Inverter_Output_Current.access = Access::kRead;

    GS_Single_Inverter_Charge_Current.offset = 6;
    GS_Single_Inverter_Charge_Current.len = 1;
    GS_Single_Inverter_Charge_Current.units = "Amps";
    GS_Single_Inverter_Charge_Current.access = Access::kRead;

    GS_Single_Inverter_Buy_Current.offset = 7;
    GS_Single_Inverter_Buy_Current.len = 1;
    GS_Single_Inverter_Buy_Current.units = "Amps";
    GS_Single_Inverter_Buy_Current.access = Access::kRead;

    GS_Single_Inverter_Sell_Current.offset = 8;
    GS_Single_Inverter_Sell_Current.len = 1;
    GS_Single_Inverter_Sell_Current.units = "Amps";
    GS_Single_Inverter_Sell_Current.access = Access::kRead;

    GS_Single_Grid_Input_AC_Voltage.offset = 9;
    GS_Single_Grid_Input_AC_Voltage.len = 1;
    GS_Single_Grid_Input_AC_Voltage.units = "VAC";
    GS_Single_Grid_Input_AC_Voltage.access = Access::kRead;

    GS_Single_Gen_Input_AC_Voltage.offset = 10;
    GS_Single_Gen_Input_AC_Voltage.len = 1;
    GS_Single_Gen_Input_AC_Voltage.units = "VAC";
    GS_Single_Gen_Input_AC_Voltage.access = Access::kRead;

    GS_Single_Output_AC_Voltage.offset = 11;
    GS_Single_Output_AC_Voltage.len = 1;
    GS_Single_Output_AC_Voltage.units = "VAC";
    GS_Single_Output_AC_Voltage.access = Access::kRead;

    GS_Single_Inverter_Operating_mode.offset = 12;
    GS_Single_Inverter_Operating_mode.len = 1;
    GS_Single_Inverter_Operating_mode.units = "Enumerated";
    GS_Single_Inverter_Operating_mode.access = Access::kRead;

    GS_Single_Error_Flags.offset = 13;
    GS_Single_Error_Flags.len = 1;
    GS_Single_Error_Flags.units = "Bitfield";
    GS_Single_Error_Flags.access = Access::kRead;

    GS_Single_Warning_Flags.offset = 14;
    GS_Single_Warning_Flags.len = 1;
    GS_Single_Warning_Flags.units = "Bitfield";
    GS_Single_Warning_Flags.access = Access::kRead;

    GS_Single_Battery_Voltage.offset = 15;
    GS_Single_Battery_Voltage.len = 1;
    GS_Single_Battery_Voltage.units = "VDC";
    GS_Single_Battery_Voltage.access = Access::kRead;

    GS_Single_Temp_Compensated_Target_Voltage.offset = 16;
    GS_Single_Temp_Compensated_Target_Voltage.len = 1;
    GS_Single_Temp_Compensated_Target_Voltage.units = "VDC";
    GS_Single_Temp_Compensated_Target_Voltage.access = Access::kRead;

    GS_Single_AUX_Output_State.offset = 17;
    GS_Single_AUX_Output_State.len = 1;
    GS_Single_AUX_Output_State.units = "Enumerated";
    GS_Single_AUX_Output_State.access = Access::kRead;

    GS_Single_AUX_Relay_Output_State.offset = 18;
    GS_Single_AUX_Relay_Output_State.len = 1;
    GS_Single_AUX_Relay_Output_State.units = "Enumerated";
    GS_Single_AUX_Relay_Output_State.access = Access::kRead;

    GS_Single_L_Module_Transformer_Temperature.offset = 19;
    GS_Single_L_Module_Transformer_Temperature.len = 1;
    GS_Single_L_Module_Transformer_Temperature.units = "Degree C";
    GS_Single_L_Module_Transformer_Temperature.access = Access::kRead;

    GS_Single_L_Module_Capacitor_Temperature.offset = 20;
    GS_Single_L_Module_Capacitor_Temperature.len = 1;
    GS_Single_L_Module_Capacitor_Temperature.units = "Degree C";
    GS_Single_L_Module_Capacitor_Temperature.access = Access::kRead;

    GS_Single_L_Module_FET_Temperature.offset = 21;
    GS_Single_L_Module_FET_Temperature.len = 1;
    GS_Single_L_Module_FET_Temperature.units = "Degree C";
    GS_Single_L_Module_FET_Temperature.access = Access::kRead;

    GS_Single_R_Module_Transformer_Temperature.offset = 22;
    GS_Single_R_Module_Transformer_Temperature.len = 1;
    GS_Single_R_Module_Transformer_Temperature.units = "Degree C";
    GS_Single_R_Module_Transformer_Temperature.access = Access::kRead;

    GS_Single_R_Module_Capacitor_Temperature.offset = 23;
    GS_Single_R_Module_Capacitor_Temperature.len = 1;
    GS_Single_R_Module_Capacitor_Temperature.units = "Degree C";
    GS_Single_R_Module_Capacitor_Temperature.access = Access::kRead;

    GS_Single_R_Module_FET_Temperature.offset = 24;
    GS_Single_R_Module_FET_Temperature.len = 1;
    GS_Single_R_Module_FET_Temperature.units = "Degree C";
    GS_Single_R_Module_FET_Temperature.access = Access::kRead;

    GS_Single_Battery_Temperature.offset = 25;
    GS_Single_Battery_Temperature.len = 1;
    GS_Single_Battery_Temperature.units = "Degree C";
    GS_Single_Battery_Temperature.access = Access::kRead;

    GS_Single_AC_Input_Selection.offset = 26;
    GS_Single_AC_Input_Selection.len = 1;
    GS_Single_AC_Input_Selection.units = "Enumerated";
    GS_Single_AC_Input_Selection.access = Access::kRead;

    GS_Single_AC_Input_Frequency.offset = 27;
    GS_Single_AC_Input_Frequency.len = 1;
    GS_Single_AC_Input_Frequency.units = "Hz";
    GS_Single_AC_Input_Frequency.access = Access::kRead;

    GS_Single_AC_Input_Voltage.offset = 28;
    GS_Single_AC_Input_Voltage.len = 1;
    GS_Single_AC_Input_Voltage.units = "VAC";
    GS_Single_AC_Input_Voltage.access = Access::kRead;

    GS_Single_AC_Input_State.offset = 29;
    GS_Single_AC_Input_State.len = 1;
    GS_Single_AC_Input_State.units = "Enumerated";
    GS_Single_AC_Input_State.access = Access::kRead;

    GS_Single_Minimum_AC_Input_Voltage.offset = 30;
    GS_Single_Minimum_AC_Input_Voltage.len = 1;
    GS_Single_Minimum_AC_Input_Voltage.units = "VAC";
    GS_Single_Minimum_AC_Input_Voltage.access = Access::kRead;

    GS_Single_Maximum_AC_Input_Voltage.offset = 31;
    GS_Single_Maximum_AC_Input_Voltage.len = 1;
    GS_Single_Maximum_AC_Input_Voltage.units = "VAC";
    GS_Single_Maximum_AC_Input_Voltage.access = Access::kRead;

    GS_Single_Sell_Status.offset = 32;
    GS_Single_Sell_Status.len = 1;
    GS_Single_Sell_Status.units = "Bitfield";
    GS_Single_Sell_Status.access = Access::kRead;

    GS_Single_kWh_SF.offset = 33;
    GS_Single_kWh_SF.len = 1;
    GS_Single_kWh_SF.access = Access::kRead;

    GS_Single_AC1_Buy_kWh.offset = 34;
    GS_Single_AC1_Buy_kWh.len = 1;
    GS_Single_AC1_Buy_kWh.units = "kWh";
    GS_Single_AC1_Buy_kWh.access = Access::kRead;

    GS_Single_AC2_Buy_kWh.offset = 35;
    GS_Single_AC2_Buy_kWh.len = 1;
    GS_Single_AC2_Buy_kWh.units = "kWh";
    GS_Single_AC2_Buy_kWh.access = Access::kRead;
    
    GS_Single_AC1_Sell_kWh.offset = 36;
    GS_Single_AC2_Buy_kWh.len = 1;
    GS_Single_AC2_Buy_kWh.units = "kWh";
    GS_Single_AC2_Buy_kWh.access = Access::kRead;
    
    GS_Single_AC2_Sell_kWh.offset = 37;
    GS_Single_AC2_Buy_kWh.len = 1;
    GS_Single_AC2_Buy_kWh.units = "kWh";
    GS_Single_AC2_Buy_kWh.access = Access::kRead;

    GS_Single_Output_kWh.offset = 38;
    GS_Single_Output_kWh.len = 1;
    GS_Single_Output_kWh.units = "kWh";
    GS_Single_Output_kWh.access = Access::kRead;

    GS_Single_Charger_kWh.offset = 39;
    GS_Single_Charger_kWh.len = 1;
    GS_Single_Charger_kWh.units = "kWh";
    GS_Single_Charger_kWh.access = Access::kRead;
    
    GS_Single_Output_kW.offset = 40;
    GS_Single_Output_kW.len = 1;
    GS_Single_Output_kW.units = "kW";
    GS_Single_Output_kW.access = Access::kRead;

    GS_Single_Buy_kW.offset = 41;
    GS_Single_Buy_kW.len = 1;
    GS_Single_Buy_kW.units = "kW";
    GS_Single_Buy_kW.access = Access::kRead;

    GS_Single_Sell_kW.offset = 42;
    GS_Single_Sell_kW.len = 1;
    GS_Single_Sell_kW.units = "kW";
    GS_Single_Sell_kW.access = Access::kRead;

    GS_Single_Charge_kW.offset = 43;
    GS_Single_Charge_kW.len = 1;
    GS_Single_Charge_kW.units = "kW";
    GS_Single_Charge_kW.access = Access::kRead;    

    GS_Single_Load_kW.offset = 44;
    GS_Single_Load_kW.len = 1;
    GS_Single_Load_kW.units = "kW";
    GS_Single_Load_kW.access = Access::kRead;

    GS_Single_AC_Couple_kW.offset = 45;
    GS_Single_AC_Couple_kW.len = 1;
    GS_Single_AC_Couple_kW.units = "kW";
    GS_Single_AC_Couple_kW.access = Access::kRead;


}



Single_Phase_Radian_Inverter_Real_Time_Block::~Single_Phase_Radian_Inverter_Real_Time_Block()
{
}
