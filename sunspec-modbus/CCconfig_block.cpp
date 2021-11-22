#include"include/sunspec/CCconfig_block.hpp"

using namespace sunspec;

CCconfig_block::CCconfig_block(/*64112 arguments*/)

{

    id = "1";
    length = 88;
    name = "Charge Controller Configuration Block";
    description = "Vendor Extension for OutBack FM Series Charge Controllers";

    CCconfig_Port_number.offset = 0;
    CCconfig_Port_number.len = 1;
    CCconfig_Port_number.access = Access::kRead;

    CCconfig_Voltage_SF.offset = 1;
    CCconfig_Voltage_SF.len = 1;
    CCconfig_Voltage_SF.access = Access::kRead;

    CCconfig_Current_SF.offset = 2;
    CCconfig_Current_SF.len = 1;
    CCconfig_Current_SF.access = Access::kRead;

    CCconfig_Hours_SF.offset = 3;
    CCconfig_Hours_SF.len = 1;
    CCconfig_Hours_SF.access = Access::kRead;

    CCconfig_Power_SF.offset = 4;
    CCconfig_Power_SF.len = 1;
    CCconfig_Power_SF.access = Access::kRead;

    CCconfig_AH_SF.offset = 5;
    CCconfig_AH_SF.len = 1;
    CCconfig_AH_SF.access = Access::kRead;

    CCconfig_KWH_SF.offset = 6;
    CCconfig_KWH_SF.len = 1;
    CCconfig_KWH_SF.access = Access::kRead;

    CCconfig_Faults.offset = 7;
    CCconfig_Faults.len = 1;
    CCconfig_Faults.units = "Bitfield";
    CCconfig_Faults.access = Access::kRead;

    CCconfig_Absorb_Volts.offset = 8;
    CCconfig_Absorb_Volts.len = 1;
    CCconfig_Absorb_Volts.units = "Volts";
    CCconfig_Absorb_Volts.access = Access::kReadWrite;

    CCconfig_Absorb_Time_Hours.offset = 9;
    CCconfig_Absorb_Time_Hours.len = 1;
    CCconfig_Absorb_Time_Hours.units = "Hours";
    CCconfig_Absorb_Time_Hours.access = Access::kReadWrite;

    CCconfig_Absorb_End_Amps.offset = 10;
    CCconfig_Absorb_End_Amps.len = 1;
    CCconfig_Absorb_End_Amps.units = "Amps";
    CCconfig_Absorb_End_Amps.access = Access::kReadWrite;

    CCconfig_Rebulk_Volts.offset = 11;
    CCconfig_Rebulk_Volts.len = 1;
    CCconfig_Rebulk_Volts.units = "Volts";
    CCconfig_Rebulk_Volts.access = Access::kReadWrite;

    CCconfig_Float_Volts.offset = 12;
    CCconfig_Float_Volts.len = 1;
    CCconfig_Float_Volts.units = "Volts";
    CCconfig_Float_Volts.access = Access::kReadWrite;

    CCconfig_Bulk_Current.offset = 13;
    CCconfig_Bulk_Current.len = 1;
    CCconfig_Bulk_Current.units = "Amps";
    CCconfig_Bulk_Current.access = Access::kReadWrite;

    CCconfig_EQ_Volts.offset = 14;
    CCconfig_EQ_Volts.len = 1;
    CCconfig_EQ_Volts.units = "Volts";
    CCconfig_EQ_Volts.access = Access::kReadWrite;

    CCconfig_EQ_Time_Hours.offset = 15;
    CCconfig_EQ_Time_Hours.len = 1;
    CCconfig_EQ_Time_Hours.units = "Hours";
    CCconfig_EQ_Time_Hours.access = Access::kReadWrite;

    CCconfig_Auto_EQ_Days.offset = 16;
    CCconfig_Auto_EQ_Days.len = 1;
    CCconfig_Auto_EQ_Days.units = "Days";
    CCconfig_Auto_EQ_Days.access = Access::kReadWrite;

    CCconfig_MPPT_Mode.offset = 17;
    CCconfig_MPPT_Mode.len = 1;
    CCconfig_MPPT_Mode.units = "Enumerated";
    CCconfig_MPPT_Mode.access = Access::kReadWrite;

    CCconfig_Sweep_Width.offset = 18;
    CCconfig_Sweep_Width.len = 1;
    CCconfig_Sweep_Width.units = "Enumerated";
    CCconfig_Sweep_Width.access = Access::kReadWrite;

    CCconfig_Sweep_Max_Percentage.offset = 19;
    CCconfig_Sweep_Max_Percentage.len = 1;
    CCconfig_Sweep_Max_Percentage.units = "Enumerated";
    CCconfig_Sweep_Max_Percentage.access = Access::kReadWrite;

    CCconfig_U_Pick_PWM_Duty_Cycle.offset = 20;
    CCconfig_U_Pick_PWM_Duty_Cycle.len = 1;
    CCconfig_U_Pick_PWM_Duty_Cycle.units = "Percentage";
    CCconfig_U_Pick_PWM_Duty_Cycle.access = Access::kReadWrite;

    CCconfig_Grid_Tie_Mode.offset = 21;
    CCconfig_Grid_Tie_Mode.len = 1;
    CCconfig_Grid_Tie_Mode.units = "Enumerated";
    CCconfig_Grid_Tie_Mode.access = Access::kReadWrite;

    CCconfig_Temp_Comp_Mode.offset = 22;
    CCconfig_Temp_Comp_Mode.len = 1;
    CCconfig_Temp_Comp_Mode.units = "Enumrated";
    CCconfig_Temp_Comp_Mode.access = Access::kReadWrite;

    CCconfig_Temp_Comp_Lower_Limit_Volts.offset = 23;
    CCconfig_Temp_Comp_Lower_Limit_Volts.len = 1;
    CCconfig_Temp_Comp_Lower_Limit_Volts.units = "Volts";
    CCconfig_Temp_Comp_Lower_Limit_Volts.access = Access::kReadWrite;

    CCconfig_Temp_Comp_Upper_Limit_Volts.offset = 24;
    CCconfig_Temp_Comp_Upper_Limit_Volts.len = 1;
    CCconfig_Temp_Comp_Upper_Limit_Volts.units = "Volts";
    CCconfig_Temp_Comp_Upper_Limit_Volts.access = Access::kReadWrite;

    CCconfig_Temp_Comp_Slope.offset = 25;
    CCconfig_Temp_Comp_Slope.len = 1;
    CCconfig_Temp_Comp_Slope.units = "Milli Volts";
    CCconfig_Temp_Comp_Slope.access = Access::kReadWrite;

    CCconfig_Auto_Restart_Mode.offset = 26;
    CCconfig_Auto_Restart_Mode.len = 1;
    CCconfig_Auto_Restart_Mode.units = "Enumerated";
    CCconfig_Auto_Restart_Mode.access = Access::kReadWrite;

    CCconfig_Wakeup_VOC.offset = 27;
    CCconfig_Wakeup_VOC.len = 1;
    CCconfig_Wakeup_VOC.units = "Volts";
    CCconfig_Wakeup_VOC.access = Access::kReadWrite;

    CCconfig_Snooze_Mode_Amps.offset = 28;
    CCconfig_Snooze_Mode_Amps.len = 1;
    CCconfig_Snooze_Mode_Amps.units = "Amps";
    CCconfig_Snooze_Mode_Amps.access = Access::kReadWrite;

    CCconfig_Wakeup_Interval.offset = 29;
    CCconfig_Wakeup_Interval.len = 1;
    CCconfig_Wakeup_Interval.units = "Mins";
    CCconfig_Wakeup_Interval.access = Access::kReadWrite;

    CCconfig_AUX_Mode.offset = 30;
    CCconfig_AUX_Mode.len = 1;
    CCconfig_AUX_Mode.units = "Enumerated";
    CCconfig_AUX_Mode.access = Access::kReadWrite;

    CCconfig_AUX_Control.offset = 31;
    CCconfig_AUX_Control.len = 1;
    CCconfig_AUX_Control.units = "Enumrated";
    CCconfig_AUX_Control.access = Access::kReadWrite;

    CCconfig_AUX_State.offset = 32;
    CCconfig_AUX_State.len = 1;
    CCconfig_AUX_State.units = "Enumrated";
    CCconfig_AUX_State.access = Access::kRead;

    CCconfig_AUX_Polarity.offset = 33;
    CCconfig_AUX_Polarity.len = 1;
    CCconfig_AUX_Polarity.units = "Enumrated";
    CCconfig_AUX_Polarity.access = Access::kReadWrite;

    CCconfig_AUX_Low_Batt_Disconnect.offset = 34;
    CCconfig_AUX_Low_Batt_Disconnect.len = 1;
    CCconfig_AUX_Low_Batt_Disconnect.units = "Volts";
    CCconfig_AUX_Low_Batt_Disconnect.access = Access::kReadWrite;

    CCconfig_AUX_Low_Batt_Reconnect.offset = 35;
    CCconfig_AUX_Low_Batt_Reconnect.len = 1;
    CCconfig_AUX_Low_Batt_Reconnect.units = "Volts";
    CCconfig_AUX_Low_Batt_Reconnect.access = Access::kReadWrite;

    CCconfig_AUX_Low_Batt_Disconnect_Delay.offset = 36;
    CCconfig_AUX_Low_Batt_Disconnect_Delay.len = 1;
    CCconfig_AUX_Low_Batt_Disconnect_Delay.units = "Secs";
    CCconfig_AUX_Low_Batt_Disconnect_Delay.access = Access::kReadWrite;

    CCconfig_AUX_Vent_Fan_Volts.offset = 37;
    CCconfig_AUX_Vent_Fan_Volts.len = 1;
    CCconfig_AUX_Vent_Fan_Volts.units = "Volts";
    CCconfig_AUX_Vent_Fan_Volts.access = Access::kReadWrite;

    CCconfig_AUX_PV_Limit_Volts.offset = 38;
    CCconfig_AUX_PV_Limit_Volts.len = 1;
    CCconfig_AUX_PV_Limit_Volts.units = "Volts";
    CCconfig_AUX_PV_Limit_Volts.access = Access::kReadWrite;

    CCconfig_AUX_PV_Limit_Hold_Time.offset = 39;
    CCconfig_AUX_PV_Limit_Hold_Time.len = 1;
    CCconfig_AUX_PV_Limit_Hold_Time.units = "Secs";
    CCconfig_AUX_PV_Limit_Hold_Time.access = Access::kReadWrite;


    CCconfig_AUX_Night_Light_Thres_Volts.offset = 40;
    CCconfig_AUX_Night_Light_Thres_Volts.len = 1;
    CCconfig_AUX_Night_Light_Thres_Volts.units = "Volts";
    CCconfig_AUX_Night_Light_Thres_Volts.access = Access::kReadWrite;


    CCconfig_Night_Light_ON_Hours.offset = 41;
    CCconfig_Night_Light_ON_Hours.len = 1;
    CCconfig_Night_Light_ON_Hours.units = "Hours";
    CCconfig_Night_Light_ON_Hours.access = Access::kReadWrite;

    CCconfig_Night_Light_ON_Hyst_Time.offset = 42;
    CCconfig_Night_Light_ON_Hyst_Time.len = 1;
    CCconfig_Night_Light_ON_Hyst_Time.units = "Mins";
    CCconfig_Night_Light_ON_Hyst_Time.access = Access::kReadWrite;

    CCconfig_Night_Light_OFF_Hyst_Time.offset = 43;
    CCconfig_Night_Light_OFF_Hyst_Time.len = 1;
    CCconfig_Night_Light_OFF_Hyst_Time.units = "Mins";
    CCconfig_Night_Light_OFF_Hyst_Time.access = Access::kReadWrite;

    CCconfig_AUX_Error_Battery_Volts.offset = 44;
    CCconfig_AUX_Error_Battery_Volts.len = 1;
    CCconfig_AUX_Error_Battery_Volts.units = "Volts";
    CCconfig_AUX_Error_Battery_Volts.access = Access::kReadWrite;

    CCconfig_AUX_Divert_Hold_Time.offset = 45;
    CCconfig_AUX_Divert_Hold_Time.len = 1;
    CCconfig_AUX_Divert_Hold_Time.units = "Seconds";
    CCconfig_AUX_Divert_Hold_Time.access = Access::kReadWrite;

    CCconfig_AUX_Divert_Delay_Time.offset = 46;
    CCconfig_AUX_Divert_Delay_Time.len = 1;
    CCconfig_AUX_Divert_Delay_Time.units = "Secs";
    CCconfig_AUX_Divert_Delay_Time.access = Access::kReadWrite;

    CCconfig_AUX_Divert_Relative_Volts.offset = 47;
    CCconfig_AUX_Divert_Relative_Volts.len = 1;
    CCconfig_AUX_Divert_Relative_Volts.units = "Volts";
    CCconfig_AUX_Divert_Relative_Volts.access = Access::kReadWrite;

    CCconfig_AUX_Divert_Hyst_Volts.offset = 48;
    CCconfig_AUX_Divert_Hyst_Volts.len = 1;
    CCconfig_AUX_Divert_Hyst_Volts.units = "Volts";
    CCconfig_AUX_Divert_Hyst_Volts.access = Access::kReadWrite;

    CCconfig_Major_Firmware_Number.offset = 49;
    CCconfig_Major_Firmware_Number.len = 1;
    CCconfig_Major_Firmware_Number.access = Access::kRead;

    CCconfig_Mid_Firmware_Number.offset = 50;
    CCconfig_Mid_Firmware_Number.len = 1;
    CCconfig_Mid_Firmware_Number.access = Access::kRead;

    CCconfig_Minor_Firmware_Number.offset = 51;
    CCconfig_Minor_Firmware_Number.len = 1;
    CCconfig_Minor_Firmware_Number.access = Access::kRead;

    CCconfig_Set_Data_Log_Day_Offset.offset = 52;
    CCconfig_Set_Data_Log_Day_Offset.len = 1;
    CCconfig_Set_Data_Log_Day_Offset.units = "Days";
    CCconfig_Set_Data_Log_Day_Offset.access = Access::kReadWrite;

    CCconfig_Get_Current_Data_Log_Day_Offset.offset = 53;
    CCconfig_Get_Current_Data_Log_Day_Offset.len = 1;
    CCconfig_Get_Current_Data_Log_Day_Offset.units = "Days";
    CCconfig_Get_Current_Data_Log_Day_Offset.access = Access::kRead;

    CCconfig_Data_Log_Daily_AH.offset = 54;
    CCconfig_Data_Log_Daily_AH.len = 1;
    CCconfig_Data_Log_Daily_AH.units = "AH";
    CCconfig_Data_Log_Daily_AH.access = Access::kRead;

    CCconfig_Data_Log_Daily_kWH.offset = 55;
    CCconfig_Data_Log_Daily_kWH.len = 1;
    CCconfig_Data_Log_Daily_kWH.units = "KWH";
    CCconfig_Data_Log_Daily_kWH.access = Access::kRead;

    CCconfig_Data_Log_Daily_Max_Output_Amps.offset = 56;
    CCconfig_Data_Log_Daily_Max_Output_Amps.len = 1;
    CCconfig_Data_Log_Daily_Max_Output_Amps.units = "Amps";
    CCconfig_Data_Log_Daily_Max_Output_Amps.access = Access::kRead;

    CCconfig_Data_Log_Daily_Max_Output_Watts.offset = 57;
    CCconfig_Data_Log_Daily_Max_Output_Watts.len = 1;
    CCconfig_Data_Log_Daily_Max_Output_Watts.units = "Watts";
    CCconfig_Data_Log_Daily_Max_Output_Watts.access = Access::kRead;

    CCconfig_Data_Log_Daily_Absorb_Time.offset = 58;
    CCconfig_Data_Log_Daily_Absorb_Time.len = 1;
    CCconfig_Data_Log_Daily_Absorb_Time.units = "Mins";
    CCconfig_Data_Log_Daily_Absorb_Time.access = Access::kRead;

    CCconfig_Data_Log_Daily_Float_Time.offset = 59;
    CCconfig_Data_Log_Daily_Float_Time.len = 1;
    CCconfig_Data_Log_Daily_Float_Time.units = "Mins";
    CCconfig_Data_Log_Daily_Float_Time.access = Access::kRead;

    CCconfig_Data_Log_Daily_Min_Batt_Volts.offset = 60;
    CCconfig_Data_Log_Daily_Min_Batt_Volts.len = 1;
    CCconfig_Data_Log_Daily_Min_Batt_Volts.units = "Volts";
    CCconfig_Data_Log_Daily_Min_Batt_Volts.access = Access::kRead;

    CCconfig_Data_Log_Daily_Max_Batt_Volts.offset = 61;
    CCconfig_Data_Log_Daily_Max_Batt_Volts.len = 1;
    CCconfig_Data_Log_Daily_Max_Batt_Volts.units = "Volts";
    CCconfig_Data_Log_Daily_Max_Batt_Volts.access = Access::kRead;

    CCconfig_Data_Log_Daily_Max_Input_Volts.offset = 62;
    CCconfig_Data_Log_Daily_Max_Input_Volts.len = 1;
    CCconfig_Data_Log_Daily_Max_Input_Volts.units = "Volts";
    CCconfig_Data_Log_Daily_Max_Input_Volts.access = Access::kRead;

    CCconfig_Clear_Data_Log_Read.offset = 63;
    CCconfig_Clear_Data_Log_Read.len = 1;
    CCconfig_Clear_Data_Log_Read.access = Access::kRead;

    CCconfig_Clear_Data_Log_Write_Complement.offset = 64;
    CCconfig_Clear_Data_Log_Write_Complement.len = 1;
    CCconfig_Clear_Data_Log_Write_Complement.access = Access::kWrite;

    CCconfig_Stats_Maximum_Reset_Read.offset = 65;
    CCconfig_Stats_Maximum_Reset_Read.len = 1;
    CCconfig_Stats_Maximum_Reset_Read.access = Access::kRead;

    CCconfig_Stats_Maximum_Write_Complement.offset = 66;
    CCconfig_Stats_Maximum_Write_Complement.len = 1;
    CCconfig_Stats_Maximum_Write_Complement.access = Access::kWrite;

    CCconfig_Stats_Totals_Reset_Read.offset = 67;
    CCconfig_Stats_Totals_Reset_Read.len = 1;
    CCconfig_Stats_Totals_Reset_Read.access = Access::kRead;

    CCconfig_Stats_Totals_Write_Complement.offset = 68;
    CCconfig_Stats_Totals_Write_Complement.len = 1;
    CCconfig_Stats_Totals_Write_Complement.access = Access::kWrite;

    CCconfig_Battery_Voltage_Calibrate_Offset.offset = 69;
    CCconfig_Battery_Voltage_Calibrate_Offset.len = 1;
    CCconfig_Battery_Voltage_Calibrate_Offset.units = "DC Volts";
    CCconfig_Battery_Voltage_Calibrate_Offset.access = Access::kReadWrite;

    CCconfig_Serial_Number.offset = 70;
    CCconfig_Serial_Number.len = 9;
    CCconfig_Serial_Number.access = Access::kRead;

    CCconfig_Model_Number.offset = 79;
    CCconfig_Model_Number.len = 9;
    CCconfig_Model_Number.access = Access::kRead;


}

CCconfig_block::~CCconfig_block()
{
    
}