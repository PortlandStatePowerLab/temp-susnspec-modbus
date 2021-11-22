#include"include/sunspec/split_phase_radian_inverter_real_time.hpp"

using namespace sunspec;

Split_phase_radian_inverter_real_time::Split_phase_radian_inverter_real_time () // 64115 arguments

{
    id = "1";
    length = 58;
    name = "Split Phase Radian Inverter Real Time Block";
    description = "Vendor Extension for OutBack Radian Series Split Phase Inverter Status Block";

    GS_Split_Port_number.offset = 0;
    GS_Split_Port_number.len = 1;
    GS_Split_Port_number.access = Access::kRead;
    
    GS_Split_DC_Voltage_SF.offset = 1;
    GS_Split_DC_Voltage_SF.len = 1;;
    GS_Split_DC_Voltage_SF.access = Access::kRead;

    GS_Split_AC_Current_SF.offset = 2;
    GS_Split_AC_Current_SF.len = 1;
    GS_Split_AC_Current_SF.access = Access::kRead;

    GS_Split_AC_Voltage_SF.offset = 3;
    GS_Split_AC_Voltage_SF.len = 1;
    GS_Split_AC_Voltage_SF.access = Access::kRead;

    GS_Split_AC_Frequency_SF.offset = 4;
    GS_Split_AC_Frequency_SF.len = 1;
    GS_Split_AC_Frequency_SF.access = Access::kRead;

    GS_Split_L1_Inverter_Output_Current.offset = 5;
    GS_Split_L1_Inverter_Output_Current.len = 1;
    GS_Split_L1_Inverter_Output_Current.units = "Amps";
    GS_Split_L1_Inverter_Output_Current.access = Access::kRead;

    GS_Split_L1_Inverter_Charge_Current.offset = 6;
    GS_Split_L1_Inverter_Charge_Current.len =1;
    GS_Split_L1_Inverter_Charge_Current.units = "Amps";
    GS_Split_L1_Inverter_Charge_Current.access = Access::kRead;

    GS_Split_L1_Inverter_Buy_Current.offset = 7;
    GS_Split_L1_Inverter_Buy_Current.len = 1;
    GS_Split_L1_Inverter_Buy_Current.units = "Amps";
    GS_Split_L1_Inverter_Buy_Current.access = Access::kRead;

    GS_Split_L1_Inverter_Sell_Current.offset = 8;
    GS_Split_L1_Inverter_Sell_Current.len = 1;
    GS_Split_L1_Inverter_Sell_Current.units = "Amps";
    GS_Split_L1_Inverter_Sell_Current.access = Access::kRead;

    GS_Split_L1_Grid_Input_AC_Voltage.offset = 9;
    GS_Split_L1_Grid_Input_AC_Voltage.len = 1;
    GS_Split_L1_Grid_Input_AC_Voltage.units "VAC";
    GS_Split_L1_Grid_Input_AC_Voltage.access = Access::kRead;

    GS_Split_L1_Gen_Input_AC_Voltage.offset = 10;
    GS_Split_L1_Gen_Input_AC_Voltage.len = 1;
    GS_Split_L1_Gen_Input_AC_Voltage.units = "VAC";
    GS_Split_L1_Gen_Input_AC_Voltage.access = Access::kRead;

    GS_Split_L1_Output_AC_Voltage.offset = 11;
    GS_Split_L1_Output_AC_Voltage.len = 1;
    GS_Split_L1_Output_AC_Voltage.units = "VAC";
    GS_Split_L1_Output_AC_Voltage.access = Access::kRead;

    GS_Split_L2_Inverter_Output_Current.offset = 12;
    GS_Split_L2_Inverter_Output_Current.len = 1;
    GS_Split_L2_Inverter_Output_Current.units = "Amps";
    GS_Split_L2_Inverter_Output_Current.access = Access::kRead;

    GS_Split_L2_Inverter_Charge_Current.offset = 13;
    GS_Split_L2_Inverter_Charge_Current.len = 1;
    GS_Split_L2_Inverter_Charge_Current.units = "Amps";
    GS_Split_L2_Inverter_Charge_Current.access = Access::kRead;

    GS_Split_L2_Inverter_Buy_Current.offset = 14;
    GS_Split_L2_Inverter_Buy_Current.len = 1;
    GS_Split_L2_Inverter_Buy_Current.units = "Amps";;
    GS_Split_L2_Inverter_Buy_Current.access = Access::kRead;

    GS_Split_L2_Inverter_Sell_Current.offset = 15;
    GS_Split_L2_Inverter_Sell_Current.len = 1;
    GS_Split_L2_Inverter_Sell_Current.units = "Amps";
    GS_Split_L2_Inverter_Sell_Current.access = Access::kRead;

    GS_Split_L2_Grid_Input_AC_Voltage.offset = 16;
    GS_Split_L2_Grid_Input_AC_Voltage.len = 1;
    GS_Split_L2_Grid_Input_AC_Voltage.units = "VAC";
    GS_Split_L2_Grid_Input_AC_Voltage.access = Access::kRead;

    GS_Split_L2_Gen_Input_AC_Voltage.offset = 17;
    GS_Split_L2_Gen_Input_AC_Voltage.len = 1;
    GS_Split_L2_Gen_Input_AC_Voltage.units = "VAC";
    GS_Split_L2_Gen_Input_AC_Voltage.access = Access::kRead;

    GS_Split_L2_Output_AC_Voltage.offset = 18;
    GS_Split_L2_Output_AC_Voltage.len = 1;
    GS_Split_L2_Output_AC_Voltage.units = "VAC";
    GS_Split_L2_Output_AC_Voltage.access = Access::kRead;

    GS_Split_Inverter_Operating_mode.offset = 19;
    GS_Split_Inverter_Operating_mode.len = 1;
    GS_Split_Inverter_Operating_mode.units = "Enumerated";;
    GS_Split_Inverter_Operating_mode.access = Access::kRead;

    GS_Split_Error_Flags.offset = 20;
    GS_Split_Error_Flags.len = 1;
    GS_Split_Error_Flags.units = "Bitfield";
    GS_Split_Error_Flags.access = Access::kRead;

    GS_Split_Warning_Flags.offset = 21;
    GS_Split_Warning_Flags.len = 1;
    GS_Split_Warning_Flags.units = "Bitfield";
    GS_Split_Warning_Flags.access = Access::kRead;

    GS_Split_Battery_Voltage.offset = 22;
    GS_Split_Battery_Voltage.len = 1;
    GS_Split_Battery_Voltage.units = "VDC";
    GS_Split_Battery_Voltage.access = Access::kRead;

    GS_Split_Temp_Compensated_Target_Voltage.offset = 23;
    GS_Split_Temp_Compensated_Target_Voltage.len = 1;
    GS_Split_Temp_Compensated_Target_Voltage.units = "VDC";
    GS_Split_Temp_Compensated_Target_Voltage.access = Access::kRead;

    GS_Split_AUX_Output_State.offset = 24;
    GS_Split_AUX_Output_State.len = 1;
    GS_Split_AUX_Output_State.units = "Enumerated";
    GS_Split_AUX_Output_State.access = Access::kRead;

    GS_Split_AUX_Relay_Output_State.offset = 25;
    GS_Split_AUX_Relay_Output_State.len = 1;
    GS_Split_AUX_Relay_Output_State.units = "Enumerated";
    GS_Split_AUX_Relay_Output_State.access = Access::kRead;

    GS_Split_L_Module_Transformer_Temperature.offset = 26;
    GS_Split_L_Module_Transformer_Temperature.len = 1;
    GS_Split_L_Module_Transformer_Temperature.units = "Degrees C";
    GS_Split_L_Module_Transformer_Temperature.access = Access::kRead;

    GS_Split_L_Module_Capacitor_Temperature.offset = 27;
    GS_Split_L_Module_Capacitor_Temperature.len = 1;
    GS_Split_L_Module_Capacitor_Temperature.units = "Degree C";
    GS_Split_L_Module_Capacitor_Temperature.access = Access::kRead;

    GS_Split_L_Module_FET_Temperature.offset = 28;
    GS_Split_L_Module_FET_Temperature.len = 1;
    GS_Split_L_Module_FET_Temperature.units = "Degree C";
    GS_Split_L_Module_FET_Temperature.access = Access::kRead;

    GS_Split_R_Module_Transformer_Temperature.offset = 29;
    GS_Split_R_Module_Transformer_Temperature.len = 1;
    GS_Split_R_Module_Transformer_Temperature.units = "Degree C";
    GS_Split_R_Module_Transformer_Temperature.access = Access::kRead;

    GS_Split_R_Module_Capacitor_Temperature.offset = 30;
    GS_Split_R_Module_Capacitor_Temperature.len = 1;
    GS_Split_R_Module_Capacitor_Temperature.units = "Degree C";
    GS_Split_R_Module_Capacitor_Temperature.access = Access::kRead;

    GS_Split_R_Module_FET_Temperature.offset = 31;
    GS_Split_R_Module_FET_Temperature.len = 1;
    GS_Split_R_Module_FET_Temperature.units = "Degree C";
    GS_Split_R_Module_FET_Temperature.access = Access::kRead;

    GS_Split_Battery_Temperature.offset = 32;
    GS_Split_Battery_Temperature.len = 1;
    GS_Split_Battery_Temperature.units = "Degree C";
    GS_Split_Battery_Temperature.access = Access::kRead;

    GS_Split_AC_Input_Selection.offset = 33;
    GS_Split_AC_Input_Selection.len = 1;
    GS_Split_AC_Input_Selection.units = "Enumerated";
    GS_Split_AC_Input_Selection.access = Access::kRead;

    GS_Split_AC_Input_Frequency.offset = 34;
    GS_Split_AC_Input_Frequency.len = 1;
    GS_Split_AC_Input_Frequency.units = "Hz";
    GS_Split_AC_Input_Frequency.access = Access::kRead;

    GS_Split_AC_Input_Voltage.offset = 35;
    GS_Split_AC_Input_Voltage.len = 1;
    GS_Split_AC_Input_Voltage.units = "VAC";
    GS_Split_AC_Input_Voltage.access = Access::kRead;

    GS_Split_AC_Input_State.offset = 36;
    GS_Split_AC_Input_State.len = 1;
    GS_Split_AC_Input_State.units = "Enumerated";
    GS_Split_AC_Input_State.access = Access::kRead;

    GS_Split_Minimum_AC_Input_Voltage.offset = 37;
    GS_Split_Minimum_AC_Input_Voltage.len = 1;
    GS_Split_Minimum_AC_Input_Voltage.units = "VAC";
    GS_Split_Minimum_AC_Input_Voltage.access = Access::kRead;

    GS_Split_Maximum_AC_Input_Voltage.offset = 38;
    GS_Split_Maximum_AC_Input_Voltage.len = 1;
    GS_Split_Maximum_AC_Input_Voltage.units = "VAC";
    GS_Split_Maximum_AC_Input_Voltage.access = Access::kRead;

    GS_Split_Sell_Status.offset = 39;
    GS_Split_Sell_Status.len = 1;
    GS_Split_Sell_Status.units = "Bitfield";
    GS_Split_Sell_Status.access = Access::kRead;

    GS_Split_kWh_SF.offset = 40;
    GS_Split_kWh_SF.len = 1;
    GS_Split_kWh_SF.access = Access::kRead;

    GS_Split_AC1_L1_Buy_kWh.offset = 41;
    GS_Split_AC1_L1_Buy_kWh.len = 1;
    GS_Split_AC1_L1_Buy_kWh.units = "kWh";
    GS_Split_AC1_L1_Buy_kWh.access = Access::kRead;

    GS_Split_AC2_L1_Buy_kWh.offset = 42;
    GS_Split_AC2_L1_Buy_kWh.len = 1;
    GS_Split_AC2_L1_Buy_kWh.units ="kWh";
    GS_Split_AC2_L1_Buy_kWh.access = Access::kRead;

    GS_Split_AC1_L1_Sell_kWh.offset = 43;
    GS_Split_AC1_L1_Sell_kWh.len = 1;
    GS_Split_AC1_L1_Sell_kWh.units = "kWh";
    GS_Split_AC1_L1_Sell_kWh.access = Access::kRead;

    GS_Split_AC2_L1_Sell_kWh.offset = 44;
    GS_Split_AC2_L1_Sell_kWh.len = 1;
    GS_Split_AC2_L1_Sell_kWh.units = "kWh";
    GS_Split_AC2_L1_Sell_kWh.access = Access::kRead;

    GS_Split_L1_Output_kWh.offset = 45;
    GS_Split_L1_Output_kWh.len = 1;
    GS_Split_L1_Output_kWh.units = "kWh";
    GS_Split_L1_Output_kWh.access = Access::kRead;

    GS_Split_AC1_L2_Buy_kWh.offset = 46;
    GS_Split_AC1_L2_Buy_kWh.len = 1;
    GS_Split_AC1_L2_Buy_kWh.units = "kWh";
    GS_Split_AC1_L2_Buy_kWh.access = Access::kRead;

    GS_Split_AC2_L2_Buy_kWh.offset = 47;
    GS_Split_AC2_L2_Buy_kWh.len = 1;
    GS_Split_AC2_L2_Buy_kWh.units = "kWh";
    GS_Split_AC2_L2_Buy_kWh.access = Access::kRead;
    
    GS_Split_AC1_L2_Sell_kWh.offset = 48;
    GS_Split_AC1_L2_Sell_kWh.len = 1;
    GS_Split_AC1_L2_Sell_kWh.units = "kWh";
    GS_Split_AC1_L2_Sell_kWh.access = Access::kRead;
    
    GS_Split_AC2_L2_Sell_kWh.offset = 49;
    GS_Split_AC1_L2_Sell_kWh.len = 1;
    GS_Split_AC1_L2_Sell_kWh.units = "kWh";
    GS_Split_AC1_L2_Sell_kWh.access = Access::kRead;
    
    GS_Split_L2_Output_kWh.offset = 50;
    GS_Split_AC1_L2_Sell_kWh.len = 1;
    GS_Split_AC1_L2_Sell_kWh.units = "kWh";
    GS_Split_AC1_L2_Sell_kWh.access = Access::kRead;

    GS_Split_Charger_kWh.offset = 51;
    GS_Split_Charger_kWh.len = 1;
    GS_Split_Charger_kWh.units = "kWh";
    GS_Split_Charger_kWh.access = Access::kRead;

    GS_Split_Output_kW.offset = 52;
    GS_Split_Output_kW.len = 1;
    GS_Split_Output_kW.units = "kW";
    GS_Split_Output_kW.access = Access::kRead;

    GS_Split_Buy_kW.offset = 53;
    GS_Split_Buy_kW.len = 1;
    GS_Split_Buy_kW.units = "kW";
    GS_Split_Buy_kW.access = Access::kRead;
    
    GS_Split_Sell_kW.offset = 54;
    GS_Split_Sell_kW.len = 1;
    GS_Split_Sell_kW.units = "kW";
    GS_Split_Sell_kW.access = Access::kRead;
    
    GS_Split_Charge_kW.offset = 55;
    GS_Split_Charge_kW.len = 1;
    GS_Split_Charge_kW.units = "kW";
    GS_Split_Charge_kW.access = Access::kRead;

    GS_Split_Load_kW.offset = 56;
    GS_Split_Load_kW.len = 1;
    GS_Split_Load_kW.units = "kW";
    GS_Split_Load_kW.access = Access::kRead;

    GS_Split_AC_Couple_kW.offset = 57;
    GS_Split_AC_Couple_kW.len = 1;
    GS_Split_AC_Couple_kW.units = "kW";
    GS_Split_AC_Couple_kW.access = Access::kRead;


}

Split_phase_radian_inverter_real_time::~Split_phase_radian_inverter_real_time()
{
    
}