#include"include/sunspec/radian_inverter_config_block.hpp""


using namespace sunspec;

Radian_Inverter_Config_Block::Radian_Inverter_Config_Block() //arguments 64116

{
    id = "1";
    length = 86;
    name = "Radian Inverter Configuration Block";
    description = "Vendor Extension '-' OutBack Radian Series Split Phase Inverter Configuration Block";

    GSconfig_Port_number.offset = 0;
    GSconfig_Port_number.len = 1;
    GSconfig_Port_number.access = Access::kRead;

    GSconfig_DC_Voltage_SF.offset = 1;
    GSconfig_DC_Voltage_SF.len = 1;
    GSconfig_DC_Voltage_SF.access = Access::kRead;

    GSconfig_AC_Current_SF.offset = 2;
    GSconfig_AC_Current_SF.len = 1;
    GSconfig_AC_Current_SF.access = Access::kRead;

    GSconfig_AC_Voltage_SF.offset = 3;
    GSconfig_AC_Voltage_SF.len = 1;
    GSconfig_AC_Voltage_SF.access = Access::kRead;

    GSconfig_Time_SF.offset = 4;
    GSconfig_Time_SF.len = 1;
    GSconfig_Time_SF.access = Access::kRead;

    GSconfig_Major_Firmware_Number.offset = 5;
    GSconfig_Major_Firmware_Number.len = 1;
    GSconfig_Major_Firmware_Number.access = Access::kRead;

    GSconfig_Mid_Firmware_Number.offset = 6;
    GSconfig_Mid_Firmware_Number.len = 1;
    GSconfig_Mid_Firmware_Number.access = Access::kRead;

    GSconfig_Minor_Firmware_Number.offset = 7;
    GSconfig_Minor_Firmware_Number.len = 1;
    GSconfig_Minor_Firmware_Number.access = Access::kRead;

    GSconfig_Absorb_Volts.offset = 8;
    GSconfig_Absorb_Volts.len = 1;
    GSconfig_Absorb_Volts.units = "VDC";
    GSconfig_Absorb_Volts.access = Access::kReadWrite;

    GSconfig_Absorb_Time_Hours.offset = 9;
    GSconfig_Absorb_Time_Hours.len = 1;
    GSconfig_Absorb_Time_Hours.units = "Hours";
    GSconfig_Absorb_Time_Hours.access = Access::kReadWrite;

    GSconfig_Float_Volts.offset = 10;
    GSconfig_Float_Volts.len = 1;
    GSconfig_Float_Volts.units = "VDC";
    GSconfig_Float_Volts.access = Access::kReadWrite;

    GSconfig_Float_Time_Hours.offset = 11;
    GSconfig_Float_Time_Hours.len = 1;
    GSconfig_Float_Time_Hours.units = "Hours";
    GSconfig_Float_Time_Hours.access = Access::kReadWrite;

    GSconfig_ReFloat_Volts.offset = 12;
    GSconfig_ReFloat_Volts.len = 1;
    GSconfig_ReFloat_Volts.units = "VDC";
    GSconfig_ReFloat_Volts.access = Access::kReadWrite;

    GSconfig_EQ_Volts.offset = 13;
    GSconfig_EQ_Volts.len = 1;
    GSconfig_EQ_Volts.units = "VDC";
    GSconfig_EQ_Volts.access = Access::kReadWrite;

    GSconfig_EQ_Time_Hours.offset = 14;
    GSconfig_EQ_Time_Hours.len = 1;
    GSconfig_EQ_Time_Hours.units = "Hours";
    GSconfig_EQ_Time_Hours.access = Access::kReadWrite;

    GSconfig_Search_Sensitivity.offset = 15;
    GSconfig_Search_Sensitivity.len = 1;
    GSconfig_Search_Sensitivity.access = Access::kReadWrite;

    GSconfig_Search_Pulse_Length.offset = 16;
    GSconfig_Search_Pulse_Length.len = 1;
    GSconfig_Search_Pulse_Length.units = "Cycles";
    GSconfig_Search_Pulse_Length.access = Access::kReadWrite;

    GSconfig_Search_Pulse_Spacing.offset = 17;
    GSconfig_Search_Pulse_Spacing.len = 1;
    GSconfig_Search_Pulse_Spacing.units = "Cycles";
    GSconfig_Search_Pulse_Spacing.access = Access::kReadWrite;

    GSconfig_AC_Input_Select_Priority.offset = 18;
    GSconfig_AC_Input_Select_Priority.len = 1;
    GSconfig_AC_Input_Select_Priority.units = "Enumerated";
    GSconfig_AC_Input_Select_Priority.access = Access::kReadWrite;

    GSconfig_Grid_AC_Input_Current_Limit.offset = 19;
    GSconfig_Grid_AC_Input_Current_Limit.len = 1;
    GSconfig_Grid_AC_Input_Current_Limit.units = "Amps";
    GSconfig_Grid_AC_Input_Current_Limit.access = Access::kReadWrite;

    GSconfig_Gen_AC_Input_Current_Limit.offset = 20;
    GSconfig_Gen_AC_Input_Current_Limit.len = 1;
    GSconfig_Gen_AC_Input_Current_Limit.units = "Amps";
    GSconfig_Gen_AC_Input_Current_Limit.access = Access::kReadWrite;

    GSconfig_Charger_AC_Input_Current_Limit.offset = 21;
    GSconfig_Charger_AC_Input_Current_Limit.len = 1;
    GSconfig_Charger_AC_Input_Current_Limit.units = "Amps";
    GSconfig_Charger_AC_Input_Current_Limit.access = Access::kReadWrite;

    GSconfig_Charger_Operating_Mode.offset = 22;
    GSconfig_Charger_Operating_Mode.len = 1;
    GSconfig_Charger_Operating_Mode.units = "Enumerated";
    GSconfig_Charger_Operating_Mode.access = Access::kReadWrite;

    GSconfig_AC_Coupled.offset = 23;
    GSconfig_AC_Coupled.len = 1;
    GSconfig_AC_Coupled.units = "Enumerated";
    GSconfig_AC_Coupled.access = Access::kReadWrite;

    GSconfig_Grid_Input_Mode.offset = 24;
    GSconfig_Grid_Input_Mode.len = 1;
    GSconfig_Grid_Input_Mode.units = "Enumerated";
    GSconfig_Grid_Input_Mode.access = Access::kReadWrite;

    GSconfig_Grid_Lower_Input_Voltage_Limit.offset = 25;
    GSconfig_Grid_Lower_Input_Voltage_Limit.len = 1;
    GSconfig_Grid_Lower_Input_Voltage_Limit.units = "VAC";
    GSconfig_Grid_Lower_Input_Voltage_Limit.access = Access::kReadWrite;

    GSconfig_Grid_Upper_Input_Voltage_Limit.offset = 26;
    GSconfig_Grid_Upper_Input_Voltage_Limit.len = 1;
    GSconfig_Grid_Upper_Input_Voltage_Limit.units = "VAC";
    GSconfig_Grid_Upper_Input_Voltage_Limit.access = Access::kReadWrite;

    GSconfig_Grid_Transfer_Delay.offset = 27;
    GSconfig_Grid_Transfer_Delay.len = 1;
    GSconfig_Grid_Transfer_Delay.units = "msecs";
    GSconfig_Grid_Transfer_Delay.access = Access::kReadWrite;

    GSconfig_Grid_Connect_Delay.offset = 28;
    GSconfig_Grid_Connect_Delay.len = 1;
    GSconfig_Grid_Connect_Delay.units = "Minutes";
    GSconfig_Grid_Connect_Delay.access = Access::kReadWrite;

    GSconfig_Gen_Input_Mode.offset = 29;
    GSconfig_Gen_Input_Mode.len = 1;
    GSconfig_Gen_Input_Mode.units = "Enumerated";
    GSconfig_Gen_Input_Mode.access = Access::kReadWrite;

    GSconfig_Gen_Lower_Input_Voltage_Limit.offset = 30;
    GSconfig_Gen_Lower_Input_Voltage_Limit.len = 1;
    GSconfig_Gen_Lower_Input_Voltage_Limit.units = "VAC";
    GSconfig_Gen_Lower_Input_Voltage_Limit.access = Access::kReadWrite;

    GSconfig_Gen_Upper_Input_Voltage_Limit.offset = 31;
    GSconfig_Gen_Upper_Input_Voltage_Limit.len = 1;
    GSconfig_Gen_Upper_Input_Voltage_Limit.units = "VAC";
    GSconfig_Gen_Upper_Input_Voltage_Limit.access = Access::kReadWrite;

    GSconfig_Gen_Transfer_Delay.offset = 32;
    GSconfig_Gen_Transfer_Delay.len = 1;
    GSconfig_Gen_Transfer_Delay.units = "msecs";
    GSconfig_Gen_Transfer_Delay.access = Access::kReadWrite;

    GSconfig_Gen_Connect_Delay.offset = 33;
    GSconfig_Gen_Connect_Delay.len = 1;
    GSconfig_Gen_Connect_Delay.units = "Minutes";
    GSconfig_Gen_Connect_Delay.access = Access::kReadWrite;

    GSconfig_AC_Output_Voltage.offset = 34;
    GSconfig_AC_Output_Voltage.len = 1;
    GSconfig_AC_Output_Voltage.units = "VAC";
    GSconfig_AC_Output_Voltage.access = Access::kReadWrite;

    GSconfig_Low_Battery_Cut_Out_Voltage.offset = 35;
    GSconfig_Low_Battery_Cut_Out_Voltage.len = 1;
    GSconfig_Low_Battery_Cut_Out_Voltage.units = "VDC";
    GSconfig_Low_Battery_Cut_Out_Voltage.access = Access::kReadWrite;

    GSconfig_Low_Battery_Cut_In_Voltage.offset = 36;
    GSconfig_Low_Battery_Cut_In_Voltage.len = 1;
    GSconfig_Low_Battery_Cut_In_Voltage.units = "VDC";
    GSconfig_Low_Battery_Cut_In_Voltage.access = Access::kReadWrite;

    GSconfig_AUX_Mode.offset = 37;
    GSconfig_AUX_Mode.len =1;
    GSconfig_AUX_Mode.units = "Enumerated";
    GSconfig_AUX_Mode.access = Access::kReadWrite;

    GSconfig_AUX_Control.offset = 38;
    GSconfig_AUX_Control.len = 1;
    GSconfig_AUX_Control.units = "Enumerated";
    GSconfig_AUX_Control.access = Access::kReadWrite;

    GSconfig_AUX_ON_Battery_Voltage.offset = 39;
    GSconfig_AUX_ON_Battery_Voltage.len = 1;
    GSconfig_AUX_ON_Battery_Voltage.units = "VDC";
    GSconfig_AUX_ON_Battery_Voltage.access = Access::kReadWrite;

    GSconfig_AUX_ON_Delay_Time.offset = 40;
    GSconfig_AUX_ON_Delay_Time.len = 1;
    GSconfig_AUX_ON_Delay_Time.units = "Minutes";
    GSconfig_AUX_ON_Delay_Time.access = Access::kReadWrite;

    GSconfig_AUX_OFF_Battery_Voltage.offset = 41;
    GSconfig_AUX_OFF_Battery_Voltage.len = 1;
    GSconfig_AUX_OFF_Battery_Voltage.units = "VDC";
    GSconfig_AUX_OFF_Battery_Voltage.access = Access::kReadWrite;

    GSconfig_AUX_OFF_Delay_Time.offset = 42;
    GSconfig_AUX_OFF_Delay_Time.len = 1;
    GSconfig_AUX_OFF_Delay_Time.units = "Minutes";
    GSconfig_AUX_OFF_Delay_Time.access = Access::kReadWrite;

    GSconfig_AUX_Relay_Mode.offset = 43;
    GSconfig_AUX_Relay_Mode.len = 1;
    GSconfig_AUX_Relay_Mode.units = "Enumerated";
    GSconfig_AUX_Relay_Mode.access = Access::kReadWrite;

    GSconfig_AUX_Relay_Control.offset = 44;
    GSconfig_AUX_Relay_Control.len = 1;
    GSconfig_AUX_Relay_Control.units = "Enumerated";
    GSconfig_AUX_Relay_Control.access = Access::kReadWrite;

    GSconfig_AUX_Relay_ON_Battery_Voltage.offset = 45;
    GSconfig_AUX_Relay_ON_Battery_Voltage.len = 1;
    GSconfig_AUX_Relay_ON_Battery_Voltage.units = "VDC";
    GSconfig_AUX_Relay_ON_Battery_Voltage.access = Access::kReadWrite;

    GSconfig_AUX_Relay_ON_Delay_Time.offset = 46;
    GSconfig_AUX_Relay_ON_Delay_Time.len = 1;
    GSconfig_AUX_Relay_ON_Delay_Time.units = "Minutes";
    GSconfig_AUX_Relay_ON_Delay_Time.access = Access::kReadWrite;

    GSconfig_AUX_Relay_OFF_Battery_Voltage.offset = 47;
    GSconfig_AUX_Relay_OFF_Battery_Voltage.len = 1;
    GSconfig_AUX_Relay_OFF_Battery_Voltage.units = "VDC";
    GSconfig_AUX_Relay_OFF_Battery_Voltage.access = Access::kReadWrite;

    GSconfig_AUX_Relay_OFF_Delay_Time.offset = 48;
    GSconfig_AUX_Relay_OFF_Delay_Time.len = 1;
    GSconfig_AUX_Relay_OFF_Delay_Time.units = "Minutes";
    GSconfig_AUX_Relay_OFF_Delay_Time.access = Access::kReadWrite;

    GSconfig_Stacking_Mode.offset = 49;
    GSconfig_Stacking_Mode.len = 1;
    GSconfig_Stacking_Mode.units = "Enumerated";
    GSconfig_Stacking_Mode.access = Access::kRead;


    GSconfig_Master_Power_Save_Level.offset = 50;
    GSconfig_Master_Power_Save_Level.len = 1;
    GSconfig_Master_Power_Save_Level.access = Access::kReadWrite;

    GSconfig_Slave_Power_Save_Level.offset = 51;
    GSconfig_Slave_Power_Save_Level.len = 1;
    GSconfig_Slave_Power_Save_Level.access = Access::kReadWrite;

    GSconfig_Sell_Volts.offset = 52;
    GSconfig_Sell_Volts.len = 1;
    GSconfig_Sell_Volts.units = "VDC";
    GSconfig_Sell_Volts.access = Access::kReadWrite;

    GSconfig_Grid_Tie_Window.offset = 53;
    GSconfig_Grid_Tie_Window.len = 1;
    GSconfig_Grid_Tie_Window.units = "Enumerated";
    GSconfig_Grid_Tie_Window.access = Access::kReadWrite;

    GSconfig_Grid_Tie_Enable.offset = 54;
    GSconfig_Grid_Tie_Enable.len = 1;
    GSconfig_Grid_Tie_Enable.units = "Enumerated";
    GSconfig_Grid_Tie_Enable.access = Access::kReadWrite;

    GSconfig_Grid_AC_Input_Voltage_Calibrate_Factor.offset = 55;
    GSconfig_Grid_AC_Input_Voltage_Calibrate_Factor.len = 1;
    GSconfig_Grid_AC_Input_Voltage_Calibrate_Factor.units = "VAC";
    GSconfig_Grid_AC_Input_Voltage_Calibrate_Factor.access = Access::kReadWrite;

    GSconfig_Gen_AC_Input_Voltage_Calibrate_Factor.offset = 56;
    GSconfig_Gen_AC_Input_Voltage_Calibrate_Factor.len = 1;
    GSconfig_Gen_AC_Input_Voltage_Calibrate_Factor.units = "VAC";
    GSconfig_Gen_AC_Input_Voltage_Calibrate_Factor.access = Access::kReadWrite;

    GSconfig_AC_Output_Voltage_Calibrate_Factor.offset = 57;
    GSconfig_AC_Output_Voltage_Calibrate_Factor.len = 1;
    GSconfig_AC_Output_Voltage_Calibrate_Factor.units = "VAC";
    GSconfig_AC_Output_Voltage_Calibrate_Factor.access = Access::kReadWrite;

    GSconfig_Battery_Voltage_Calibrate_Factor.offset = 58;
    GSconfig_Battery_Voltage_Calibrate_Factor.len = 1;
    GSconfig_Battery_Voltage_Calibrate_Factor.units = "VDC";
    GSconfig_Battery_Voltage_Calibrate_Factor.access = Access::kReadWrite;

    GSconfig_ReBulk_Volts.offset = 59;
    GSconfig_ReBulk_Volts.len = 1;
    GSconfig_ReBulk_Volts.units = "VDC";
    GSconfig_ReBulk_Volts.access = Access::kReadWrite;

    GSconfig_Mini_Grid_LBX_Volts.offset = 60;
    GSconfig_Mini_Grid_LBX_Volts.len = 1;
    GSconfig_Mini_Grid_LBX_Volts.units = "VDC";
    GSconfig_Mini_Grid_LBX_Volts.access = Access::kReadWrite;

    GSconfig_Mini_Grid_LBX_Delay.offset = 61;
    GSconfig_Mini_Grid_LBX_Delay.len = 1;
    GSconfig_Mini_Grid_LBX_Delay.units = "Hours";
    GSconfig_Mini_Grid_LBX_Delay.access = Access::kReadWrite;

    GSconfig_Grid_Zero_DoD_Volts.offset = 62;
    GSconfig_Grid_Zero_DoD_Volts.len = 1;
    GSconfig_Grid_Zero_DoD_Volts.units = "VDC";
    GSconfig_Grid_Zero_DoD_Volts.access = Access::kReadWrite;

    GSconfig_Grid_Zero_DoD_Max_Offset_AC_Amps.offset = 63;
    GSconfig_Grid_Zero_DoD_Max_Offset_AC_Amps.len = 1;
    GSconfig_Grid_Zero_DoD_Max_Offset_AC_Amps.units = "Amps";
    GSconfig_Grid_Zero_DoD_Max_Offset_AC_Amps.access = Access::kReadWrite;

    GSconfig_Serial_Number.offset = 64;
    GSconfig_Serial_Number.len = 9;
    GSconfig_Serial_Number.access = Access::kReadWrite;

    GSconfig_Model_Number.offset = 73;
    GSconfig_Model_Number.len = 9;
    GSconfig_Model_Number.access = Access::kRead;

    GSconfig_Module_Control.offset = 82;
    GSconfig_Module_Control.len = 1;
    GSconfig_Module_Control.units = "Enumerated";
    GSconfig_Module_Control.access = Access::kReadWrite;

    GSconfig_Model_Select.offset = 83;
    GSconfig_Model_Select.len = 1;
    GSconfig_Model_Select.units = "Enumerated";
    GSconfig_Model_Select.access = Access::kReadWrite;

    GSconfig_Low_Battery_Cut_Out_Delay.offset = 84;
    GSconfig_Low_Battery_Cut_Out_Delay.len = 1;
    GSconfig_Low_Battery_Cut_Out_Delay.units = "VDC";
    GSconfig_Low_Battery_Cut_Out_Delay.access = Access::kReadWrite;

    GSconfig_High_Battery_Cut_Out_Voltage.offset = 85;
    GSconfig_High_Battery_Cut_Out_Voltage.len = 1;
    GSconfig_High_Battery_Cut_Out_Voltage.units = "VDC";
    GSconfig_High_Battery_Cut_Out_Voltage.access = Access::kReadWrite;

    GSconfig_High_Battery_Cut_In_Voltage.offset = 86;
    GSconfig_High_Battery_Cut_In_Voltage.len = 1;
    GSconfig_High_Battery_Cut_In_Voltage.units = "VDC";
    GSconfig_High_Battery_Cut_In_Voltage.access = Access::kReadWrite;

    Gsconfig_High_Battery_Cut_Out_Delay.offset = 87;
    Gsconfig_High_Battery_Cut_Out_Delay.len = 1;
    Gsconfig_High_Battery_Cut_Out_Delay.units = "Seconds";
    Gsconfig_High_Battery_Cut_Out_Delay.access = Access::kReadWrite;




}