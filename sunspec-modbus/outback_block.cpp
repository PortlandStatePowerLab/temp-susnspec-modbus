#include"include/sunspec/outback_block.hpp""


using namespace sunspec;

OutBack_Block::OutBack_Block(/*arguments*/)
{
    id = "1";
    length = 420;
    name = "OutBack_Block";
    description = "Uniquely identifies 'this' as a SunSpec Outback Interface";

    OutBack_Major_Firmware_Number.offset = 0;
    OutBack_Major_Firmware_Number.len = 1;
    OutBack_Major_Firmware_Number.access = Access::kRead;
    
    OutBack_Mid_Firmware_Number.offset = 1;
    OutBack_Mid_Firmware_Number.len = 1;
    OutBack_Mid_Firmware_Number.access = Access::kRead;
    
    OutBack_Minor_Firmware_Number.offset = 2;
    OutBack_Minor_Firmware_Number.len = 1;
    OutBack_Minor_Firmware_Number.access = Access::kRead;
    
    OutBack_Encryption_Key.offset = 3;
    OutBack_Encryption_Key.len = 1;
    OutBack_Encryption_Key.access = Access::kRead;
    

    OutBack_MAC_Address.offset = 4;
    OutBack_MAC_Address.len = 7;
    OutBack_MAC_Address.access = Access::kRead;

    OutBack_Write_Password.offset = 11;
    OutBack_Write_Password.len = 8;
    OutBack_Write_Password.access = Access::kReadWrite;

    OutBack_Enable_DHCP.offset = 19;
    OutBack_Enable_DHCP.len = 1;
    OutBack_Enable_DHCP.units = "Enumerated";
    OutBack_Enable_DHCP.access = Access::kReadWrite;

    OutBack_TCP_IP_Address.offset = 20;
    OutBack_TCP_IP_Address.len = 2;
    OutBack_TCP_IP_Address.units = "Address";
    OutBack_TCP_IP_Address.access = Access::kReadWrite;

    OutBack_TCP_IP_Gateway_MSW.offset = 22;
    OutBack_TCP_IP_Gateway_MSW.len = 2;
    OutBack_TCP_IP_Gateway_MSW.units = "Address";
    OutBack_TCP_IP_Gateway_MSW.access = Access::kReadWrite;

    OutBack_TCP_IP_Netmask_MSW.offset = 24;
    OutBack_TCP_IP_Netmask_MSW.len = 2;
    OutBack_TCP_IP_Netmask_MSW.units = "Address";
    OutBack_TCP_IP_Netmask_MSW.access = Access::kReadWrite;

    OutBack_TCP_IP_DNS_1_MSW.offset = 26;
    OutBack_TCP_IP_DNS_1_MSW.len = 2;
    OutBack_TCP_IP_DNS_1_MSW.units = "Address";
    OutBack_TCP_IP_DNS_1_MSW.access = Access::kReadWrite;

    OutBack_TCP_IP_DNS_2_MSW.offset = 28;
    OutBack_TCP_IP_DNS_2_MSW.len = 2;
    OutBack_TCP_IP_DNS_2_MSW.units = "Address";
    OutBack_TCP_IP_DNS_2_MSW.access = Access::kReadWrite;

    OutBack_Modbus_Port.offset = 30;
    OutBack_Modbus_Port.len = 1;
    OutBack_Modbus_Port.access = Access::kReadWrite;

    OutBack_SMTP_Server_Name.offset = 31;
    OutBack_SMTP_Server_Name.len = 20;
    OutBack_SMTP_Server_Name.access = Access::kReadWrite;

    OutBack_SMTP_Account_Name.offset = 51;
    OutBack_SMTP_Account_Name.len = 16;
    OutBack_SMTP_Account_Name.access = Access::kReadWrite;

    OutBack_SMTP_SSL_Enable.offset = 67;
    OutBack_SMTP_SSL_Enable.len = 1;
    OutBack_SMTP_SSL_Enable.units = "Enumerated";
    OutBack_SMTP_SSL_Enable.access = Access::kReadWrite;

    OutBack_SMTP_Email_Password.offset = 68;
    OutBack_SMTP_Email_Password.len = 8;
    OutBack_SMTP_Email_Password.access = Access::kWrite;

    OutBack_SMTP_Email_User_Name.offset = 76;
    OutBack_SMTP_Email_User_Name.len = 20;
    OutBack_SMTP_Email_User_Name.access = Access::kReadWrite;

    OutBack_Status_Email_Interval.offset = 96;
    OutBack_Status_Email_Interval.len = 1;
    OutBack_Status_Email_Interval.access = Access::kReadWrite;

    OutBack_Status_Email_Status_Time.offset = 97;
    OutBack_Status_Email_Status_Time.len = 1;
    OutBack_Status_Email_Status_Time.access = Access::kReadWrite;

    OutBack_Status_Email_Subject_Line.offset = 98;
    OutBack_Status_Email_Subject_Line.len = 25;
    OutBack_Status_Email_Subject_Line.access = Access::kReadWrite;

    OutBack_Status_Email_To_Address_1.offset = 123;
    OutBack_Status_Email_To_Address_1.len = 20;
    OutBack_Status_Email_To_Address_1.access = Access::kReadWrite;

    OutBack_Status_Email_To_Address_2.offset = 143;
    OutBack_Status_Email_To_Address_2.len = 20;
    OutBack_Status_Email_To_Address_2.access = Access::kReadWrite;

    OutBack_Alarm_Email_Enable.offset = 163;
    OutBack_Alarm_Email_Enable.len = 1;
    OutBack_Alarm_Email_Enable.units = "Enumerated";
    OutBack_Alarm_Email_Enable.access = Access::kReadWrite;

    OutBack_Alarm_Email_Subject_Line.offset = 164;
    OutBack_Alarm_Email_Subject_Line.len = 25;
    OutBack_Alarm_Email_Subject_Line.access = Access::kReadWrite;

    OutBack_Alarm_Email_To_Address_1.offset = 189;
    OutBack_Alarm_Email_To_Address_1.len = 20;
    OutBack_Alarm_Email_To_Address_1.access = Access::kReadWrite;

    OutBack_Alarm_Email_To_Address_2.offset = 209;
    OutBack_Alarm_Email_To_Address_2.len = 20;
    OutBack_Alarm_Email_To_Address_2.access = Access::kReadWrite;

    OutBack_FTP_Password.offset = 229;
    OutBack_FTP_Password.len = 8;
    OutBack_FTP_Password.access = Access::kWrite;

    OutBack_Telnet_Password.offset = 237;
    OutBack_Telnet_Password.len = 8;
    OutBack_Telnet_Password.access = Access::kWrite;

    OutBack_SD_Card_Data_Log_Write_Interval.offset = 245;
    OutBack_SD_Card_Data_Log_Write_Interval.len = 1;
    OutBack_SD_Card_Data_Log_Write_Interval.access = Access::kReadWrite;

    OutBack_SD_Card_Data_Log_Retain_Days.offset = 246;
    OutBack_SD_Card_Data_Log_Retain_Days.len = 1;
    OutBack_SD_Card_Data_Log_Retain_Days.access = Access::kReadWrite;

    OutBack_SD_Card_Data_Logging_Mode.offset = 247;
    OutBack_SD_Card_Data_Logging_Mode.len = 1;
    OutBack_SD_Card_Data_Logging_Mode.units = "Enumerated";
    OutBack_SD_Card_Data_Logging_Mode.access = Access::kReadWrite;

    OutBack_Time_Server_Name.offset = 248;
    OutBack_Time_Server_Name.len = 20;
    OutBack_Time_Server_Name.access = Access::kReadWrite;

    OutBack_Enable_Time_Server.offset = 268;
    OutBack_Enable_Time_Server.len = 1;
    OutBack_Enable_Time_Server.units = "Enumerated";
    OutBack_Enable_Time_Server.access = Access::kReadWrite;

    OutBack_Set_Time_Zone.offset = 269;
    OutBack_Set_Time_Zone.len = 1;
    OutBack_Set_Time_Zone.units = "Hours";
    OutBack_Set_Time_Zone.access = Access::kReadWrite;

    OutBack_Enable_Float_Coordination.offset = 270;
    OutBack_Enable_Float_Coordination.len = 1;
    OutBack_Enable_Float_Coordination.access = Access::kReadWrite;

    OutBack_Enable_FNDC_Charge_Termination.offset = 271;
    OutBack_Enable_FNDC_Charge_Termination.len = 1;
    OutBack_Enable_FNDC_Charge_Termination.access = Access::kReadWrite;

    OutBack_Enable_FNDC_Grid_Tie_Control.offset = 272;
    OutBack_Enable_FNDC_Grid_Tie_Control.len = 1;
    OutBack_Enable_FNDC_Grid_Tie_Control.access = Access::kReadWrite;

    OutBack_Voltage_SF.offset = 273;
    OutBack_Voltage_SF.len = 1;
    OutBack_Voltage_SF.access = Access::kRead;

    OutBack_Hour_SF.offset = 274;
    OutBack_Hour_SF.len = 1;
    OutBack_Hour_SF.access = Access::kRead;

    OutBack_AGS_Mode.offset = 275;
    OutBack_AGS_Mode.len = 1;
    OutBack_AGS_Mode.units = "Enumerated";
    OutBack_AGS_Mode.access = Access::kReadWrite;

    OutBack_AGS_Port.offset = 276;
    OutBack_AGS_Port.len = 1;
    OutBack_AGS_Port.access = Access::kReadWrite;

    OutBack_AGS_Port_Type.offset = 277;
    OutBack_AGS_Port_Type.len = 1;
    OutBack_AGS_Port_Type.units = "Enumerated";
    OutBack_AGS_Port_Type.access = Access::kReadWrite;

    OutBack_AGS_Generator_Type.offset = 278;
    OutBack_AGS_Generator_Type.len = 1;
    OutBack_AGS_Generator_Type.units = "Enumerated";
    OutBack_AGS_Generator_Type.access = Access::kReadWrite;

    OutBack_AGS_DC_Gen_Absorb_Voltage.offset = 279;
    OutBack_AGS_DC_Gen_Absorb_Voltage.len =1;
    OutBack_AGS_DC_Gen_Absorb_Voltage.units = "Volts";
    OutBack_AGS_DC_Gen_Absorb_Voltage.access = Access::kReadWrite;

    OutBack_AGS_DC_Gen_Absorb_Time.offset = 280;
    OutBack_AGS_DC_Gen_Absorb_Time.len = 1;
    OutBack_AGS_DC_Gen_Absorb_Time.units = "Hour";
    OutBack_AGS_DC_Gen_Absorb_Time.access = Access::kReadWrite;

    OutBack_AGS_Fault_Time.offset = 281;
    OutBack_AGS_Fault_Time.len = 1;
    OutBack_AGS_Fault_Time.units = "Minutes";
    OutBack_AGS_Fault_Time.access = Access::kReadWrite;

    OutBack_AGS_Gen_Cool_Down_Time.offset = 282;
    OutBack_AGS_Gen_Cool_Down_Time.len = 1;
    OutBack_AGS_Gen_Cool_Down_Time.units = "Minutes";
    OutBack_AGS_Gen_Cool_Down_Time.access = Access::kReadWrite;

    OutBack_AGS_Gen_Warm_Up_Time.offset = 283;
    OutBack_AGS_Gen_Warm_Up_Time.len = 1;
    OutBack_AGS_Gen_Warm_Up_Time.units = "Minutes";
    OutBack_AGS_Gen_Warm_Up_Time.access = Access::kReadWrite;

    OutBack_AGS_Generator_Exercise_Mode.offset = 284;
    OutBack_AGS_Generator_Exercise_Mode.len = 1;
    OutBack_AGS_Generator_Exercise_Mode.units =  "Enumerated";
    OutBack_AGS_Generator_Exercise_Mode.access = Access::kReadWrite;

    OutBack_AGS_Exercise_Start_Hour.offset = 285;
    OutBack_AGS_Exercise_Start_Hour.len = 1;
    OutBack_AGS_Exercise_Start_Hour.units = "Hour";
    OutBack_AGS_Exercise_Start_Hour.access = Access::kReadWrite;

    OutBack_AGS_Exercise_Start_Minute.offset = 286;
    OutBack_AGS_Exercise_Start_Minute.len = 1;
    OutBack_AGS_Exercise_Start_Minute.units = "Minutes";
    OutBack_AGS_Exercise_Start_Minute.access = Access::kReadWrite;

    OutBack_AGS_Exercise_Day.offset = 287;
    OutBack_AGS_Exercise_Day.len = 1;
    OutBack_AGS_Exercise_Day.units = "Enumerated";
    OutBack_AGS_Exercise_Day.access = Access::kReadWrite;

    OutBack_AGS_Exercise_Period.offset = 288;
    OutBack_AGS_Exercise_Period.len = 1;
    OutBack_AGS_Exercise_Period.units = "Minutes";
    OutBack_AGS_Exercise_Period.access = Access::kReadWrite;

    OutBack_AGS_Exercise_Interval.offset = 289;
    OutBack_AGS_Exercise_Interval.len = 1;
    OutBack_AGS_Exercise_Interval.units = "Weeks";
    OutBack_AGS_Exercise_Interval.access = Access::kReadWrite;

    OutBack_AGS_Sell_Mode.offset = 290;
    OutBack_AGS_Sell_Mode.len = 1;
    OutBack_AGS_Sell_Mode.units = "Enumerated";
    OutBack_AGS_Sell_Mode.access = Access::kReadWrite;

    OutBack_AGS_2_Min_Start_Mode.offset = 291;
    OutBack_AGS_2_Min_Start_Mode.len = 1;
    OutBack_AGS_2_Min_Start_Mode.units = "Enumerated";
    OutBack_AGS_2_Min_Start_Mode.access = Access::kReadWrite;

    OutBack_AGS_2_Min_Start_Voltage.offset = 292;
    OutBack_AGS_2_Min_Start_Voltage.len = 1;
    OutBack_AGS_2_Min_Start_Voltage.units = "Volts";
    OutBack_AGS_2_Min_Start_Voltage.access = Access::kReadWrite;

    OutBack_AGS_2_Hour_Start_Mode.offset = 293;
    OutBack_AGS_2_Hour_Start_Mode.len = 1;
    OutBack_AGS_2_Hour_Start_Mode.units = "Enumerated";
    OutBack_AGS_2_Hour_Start_Mode.access = Access::kReadWrite;

    OutBack_AGS_2_Hour_Start_Voltage.offset = 294;
    OutBack_AGS_2_Hour_Start_Voltage.len = 1;
    OutBack_AGS_2_Hour_Start_Voltage.units = "Volts";
    OutBack_AGS_2_Hour_Start_Voltage.access = Access::kReadWrite;

    OutBack_AGS_24_Hour_Start_Mode.offset = 295;
    OutBack_AGS_24_Hour_Start_Mode.len = 1;
    OutBack_AGS_24_Hour_Start_Mode.units = "Enumerated";
    OutBack_AGS_24_Hour_Start_Mode.access = Access::kReadWrite;

    OutBack_AGS_24_Hour_Start_Voltage.offset = 296;
    OutBack_AGS_24_Hour_Start_Voltage.len = 1;
    OutBack_AGS_24_Hour_Start_Voltage.units = "Volts";
    OutBack_AGS_24_Hour_Start_Voltage.access = Access::kReadWrite;

    OutBack_AGS_Load_Start_Mode.offset = 297;
    OutBack_AGS_Load_Start_Mode.len = 1;
    OutBack_AGS_Load_Start_Mode.units = "Enumerated";
    OutBack_AGS_Load_Start_Mode.access = Access::kReadWrite;

    OutBack_AGS_Load_Start_kW.offset = 298;
    OutBack_AGS_Load_Start_kW.len = 1;
    OutBack_AGS_Load_Start_kW.units = "kWatts";
    OutBack_AGS_Load_Start_kW.access = Access::kReadWrite;

    OutBack_AGS_Load_Start_Delay.offset = 299;
    OutBack_AGS_Load_Start_Delay.len = 1;
    OutBack_AGS_Load_Start_Delay.units = "Minutes";
    OutBack_AGS_Load_Start_Delay.access = Access::kReadWrite;

    OutBack_AGS_Load_Stop_kW.offset = 300;
    OutBack_AGS_Load_Stop_kW.len = 1;
    OutBack_AGS_Load_Stop_kW.units = "kWatts";
    OutBack_AGS_Load_Stop_kW.access = Access::kReadWrite;

    OutBack_AGS_Load_Stop_Delay.offset = 301;
    OutBack_AGS_Load_Stop_Delay.len = 1;
    OutBack_AGS_Load_Stop_Delay.units = "Minutes";
    OutBack_AGS_Load_Stop_Delay.access = Access::kReadWrite;

    OutBack_AGS_SOC_Start_Mode.offset = 302;
    OutBack_AGS_SOC_Start_Mode.len = 1;
    OutBack_AGS_SOC_Start_Mode.units = "Enumerated";
    OutBack_AGS_SOC_Start_Mode.access = Access::kReadWrite;

    OutBack_AGS_SOC_Start_Percentage.offset = 303;
    OutBack_AGS_SOC_Start_Percentage.len = 1;
    OutBack_AGS_SOC_Start_Percentage.units = "Percent";
    OutBack_AGS_SOC_Start_Percentage.access = Access::kReadWrite;

    OutBack_AGS_SOC_Stop_Percentage.offset = 304;
    OutBack_AGS_SOC_Stop_Percentage.len = 1;
    OutBack_AGS_SOC_Stop_Percentage.units = "Percent";
    OutBack_AGS_SOC_Stop_Percentage.access = Access::kReadWrite;

    OutBack_AGS_Enable_Full_Charge_Mode.offset = 305;
    OutBack_AGS_Enable_Full_Charge_Mode.len = 1;
    OutBack_AGS_Enable_Full_Charge_Mode.units = "Enumerated";
    OutBack_AGS_Enable_Full_Charge_Mode.access = Access::kReadWrite;

    OutBack_AGS_Full_Charge_Interval.offset = 306;
    OutBack_AGS_Full_Charge_Interval.len = 1;
    OutBack_AGS_Full_Charge_Interval.units = "Days";
    OutBack_AGS_Full_Charge_Interval.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Mode.offset = 307;
    OutBack_AGS_Must_Run_Mode.len = 1;
    OutBack_AGS_Must_Run_Mode.units = "Enumerated";
    OutBack_AGS_Must_Run_Mode.access = Access::kReadWrite;
    
    OutBack_AGS_Must_Run_Weekday_Start_Hour.offset = 308;
    OutBack_AGS_Must_Run_Weekday_Start_Hour.len = 1;
    OutBack_AGS_Must_Run_Weekday_Start_Hour.units = "Hours";
    OutBack_AGS_Must_Run_Weekday_Start_Hour.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Weekday_Start_Minute.offset = 309;
    OutBack_AGS_Must_Run_Weekday_Start_Hour.len = 1;
    OutBack_AGS_Must_Run_Weekday_Start_Hour.units = "Minutes";
    OutBack_AGS_Must_Run_Weekday_Start_Hour.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Weekday_Stop_Hour.offset = 310;
    OutBack_AGS_Must_Run_Weekday_Stop_Hour.len = 1;
    OutBack_AGS_Must_Run_Weekday_Stop_Hour.units = "Hours";
    OutBack_AGS_Must_Run_Weekday_Stop_Hour.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Weekday_Stop_Minute.offset = 311;
    OutBack_AGS_Must_Run_Weekday_Stop_Minute.len = 1;
    OutBack_AGS_Must_Run_Weekday_Stop_Minute.units = "Minutes";
    OutBack_AGS_Must_Run_Weekday_Stop_Minute.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Weekend_Start_Hour.offset = 312;
    OutBack_AGS_Must_Run_Weekend_Start_Hour.len = 1;
    OutBack_AGS_Must_Run_Weekend_Start_Hour.units = "Hours";
    OutBack_AGS_Must_Run_Weekend_Start_Hour.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Weekend_Start_Minute.offset = 313;
    OutBack_AGS_Must_Run_Weekend_Start_Minute.len = 1;
    OutBack_AGS_Must_Run_Weekend_Start_Minute.units = "Minutes";
    OutBack_AGS_Must_Run_Weekend_Start_Minute.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Weekend_Stop_Hour.offset = 314;
    OutBack_AGS_Must_Run_Weekend_Stop_Hour.len = 1;
    OutBack_AGS_Must_Run_Weekend_Stop_Hour.units = "Hours";
    OutBack_AGS_Must_Run_Weekend_Stop_Hour.access = Access::kReadWrite;

    OutBack_AGS_Must_Run_Weekend_Stop_Minute.offset = 315;
    OutBack_AGS_Must_Run_Weekend_Stop_Minute.len = 1;
    OutBack_AGS_Must_Run_Weekend_Stop_Minute.units = "Hours";
    OutBack_AGS_Must_Run_Weekend_Stop_Minute.access = Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Mode.offset = 316;
    OutBack_AGS_Quiet_Time_Mode.len = 1;
    OutBack_AGS_Quiet_Time_Mode.units = "Enumerated";
    OutBack_AGS_Quiet_Time_Mode.access = Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Weekday_Start_Hour.offset = 317;
    OutBack_AGS_Quiet_Time_Weekday_Start_Hour.len = 1;
    OutBack_AGS_Quiet_Time_Weekday_Start_Hour.units = "Hours";
    OutBack_AGS_Quiet_Time_Weekday_Start_Hour.access = Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Weekday_Start_Minute.offset = 318;
    OutBack_AGS_Quiet_Time_Weekday_Start_Minute.len = 1;
    OutBack_AGS_Quiet_Time_Weekday_Start_Minute.units = "Minutes";
    OutBack_AGS_Quiet_Time_Weekday_Start_Minute.access =Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Weekday_Stop_Hour.offset = 319;
    OutBack_AGS_Quiet_Time_Weekday_Stop_Hour.len = 1;
    OutBack_AGS_Quiet_Time_Weekday_Stop_Hour.units = "Hours";
    OutBack_AGS_Quiet_Time_Weekday_Stop_Hour.access = Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Weekday_Stop_Minute.offset = 320;
    OutBack_AGS_Quiet_Time_Weekday_Stop_Minute.len = 1;
    OutBack_AGS_Quiet_Time_Weekday_Stop_Minute.units = "Minutes";
    OutBack_AGS_Quiet_Time_Weekday_Stop_Minute.access = Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Weekend_Start_Hour.offset = 321;
    OutBack_AGS_Quiet_Time_Weekend_Start_Hour.len = 1;
    OutBack_AGS_Quiet_Time_Weekend_Start_Hour.units = "Hours";
    OutBack_AGS_Quiet_Time_Weekend_Start_Hour.access = Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Weekend_Start_Minute.offset = 322;
    OutBack_AGS_Quiet_Time_Weekend_Start_Minute.len = 1;
    OutBack_AGS_Quiet_Time_Weekend_Start_Minute.units = "Minutes";
    OutBack_AGS_Quiet_Time_Weekend_Start_Minute.access = Access::kReadWrite; 

    OutBack_AGS_Quiet_Time_Weekend_Stop_Hour.offset = 323;
    OutBack_AGS_Quiet_Time_Weekend_Stop_Hour.len = 1;
    OutBack_AGS_Quiet_Time_Weekend_Stop_Hour.units = "Hours";
    OutBack_AGS_Quiet_Time_Weekend_Stop_Hour.access = Access::kReadWrite;

    OutBack_AGS_Quiet_Time_Weekend_Stop_Minute.offset = 324;
    OutBack_AGS_Quiet_Time_Weekend_Stop_Minute.len = 1;
    OutBack_AGS_Quiet_Time_Weekend_Stop_Minute.units = "Minutes";
    OutBack_AGS_Quiet_Time_Weekend_Stop_Minute.access = Access::kReadWrite;

    OutBack_AGS_Total_Generator_Run_Time.offset = 325;
    OutBack_AGS_Total_Generator_Run_Time.len = 2;
    OutBack_AGS_Total_Generator_Run_Time.units = "Hours";
    OutBack_AGS_Total_Generator_Run_Time.access = Access::kReadWrite;

    OutBack_HBX_Mode.offset = 327;
    OutBack_HBX_Mode.len = 1;
    OutBack_HBX_Mode.units = "Enumerated";
    OutBack_HBX_Mode.access = Access::kReadWrite;

    OutBack_HBX_Grid_Connect_Voltage.offset = 328;
    OutBack_HBX_Grid_Connect_Voltage.len = 1;
    OutBack_HBX_Grid_Connect_Voltage.units = "Volts";
    OutBack_HBX_Grid_Connect_Voltage.access = Access::kReadWrite;

    OutBack_HBX_Grid_Connect_Delay.offset = 329;
    OutBack_HBX_Grid_Connect_Delay.len = 1;
    OutBack_HBX_Grid_Connect_Delay.units = "Hours";
    OutBack_HBX_Grid_Connect_Delay.access = Access::kReadWrite;

    OutBack_HBX_Grid_Disconnect_Voltage.offset = 330;
    OutBack_HBX_Grid_Disconnect_Voltage.len = 1;
    OutBack_HBX_Grid_Disconnect_Voltage.units = "Volts";
    OutBack_HBX_Grid_Disconnect_Voltage.access = Access::kReadWrite;

    OutBack_HBX_Grid_Disconnect_Delay.offset = 331;
    OutBack_HBX_Grid_Disconnect_Delay.len = 1;
    OutBack_HBX_Grid_Disconnect_Delay.units = "Hours";
    OutBack_HBX_Grid_Disconnect_Delay.access = Access::kReadWrite;

    OutBack_HBX_Grid_Connect_SOC.offset = 332;
    OutBack_HBX_Grid_Connect_SOC.len = 1;
    OutBack_HBX_Grid_Connect_SOC.units = "Percent";
    OutBack_HBX_Grid_Connect_SOC.access = Access::kReadWrite;

    OutBack_HBX_Grid_Disconnect_SOC.offset = 333;
    OutBack_HBX_Grid_Disconnect_SOC.len = 1;
    OutBack_HBX_Grid_Disconnect_SOC.units = "Percent";
    OutBack_HBX_Grid_Disconnect_SOC.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Mode.offset = 334;
    OutBack_Grid_Use_Interval_1_Mode.len = 1;
    OutBack_Grid_Use_Interval_1_Mode.units = "Enumerated";
    OutBack_Grid_Use_Interval_1_Mode.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekday_Start_Hour.offset = 335;
    OutBack_Grid_Use_Interval_1_Weekday_Start_Hour.len = 1;
    OutBack_Grid_Use_Interval_1_Weekday_Start_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekday_Start_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekday_Start_Minute.offset = 336;
    OutBack_Grid_Use_Interval_1_Weekday_Start_Minute.len = 1;
    OutBack_Grid_Use_Interval_1_Weekday_Start_Minute.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekday_Start_Minute.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekday_Stop_Hour.offset = 337;
    OutBack_Grid_Use_Interval_1_Weekday_Stop_Hour.len = 1;
    OutBack_Grid_Use_Interval_1_Weekday_Stop_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekday_Stop_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekday_Stop_Minute.offset = 338;
    OutBack_Grid_Use_Interval_1_Weekday_Stop_Minute.len = 1;
    OutBack_Grid_Use_Interval_1_Weekday_Stop_Minute.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekday_Stop_Minute.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekend_Start_Hour.offset = 339;
    OutBack_Grid_Use_Interval_1_Weekend_Start_Hour.len = 1;
    OutBack_Grid_Use_Interval_1_Weekend_Start_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekend_Start_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekend_Start_Minute.offset = 340;
    OutBack_Grid_Use_Interval_1_Weekend_Start_Minute.len = 1;
    OutBack_Grid_Use_Interval_1_Weekend_Start_Minute.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekend_Start_Minute.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour.offset = 341;
    OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour.len = 1;
    OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_1_Weekend_Stop_Minute.offset = 342;
    OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour.len = 1;
    OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_2_Mode.offset = 343;
    OutBack_Grid_Use_Interval_2_Mode.len = 1;
    OutBack_Grid_Use_Interval_2_Mode.units = "Enumerated";
    OutBack_Grid_Use_Interval_2_Mode.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_2_Weekday_Start_Hour.offset = 344;
    OutBack_Grid_Use_Interval_2_Weekday_Start_Hour.len = 1;
    OutBack_Grid_Use_Interval_2_Weekday_Start_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_2_Weekday_Start_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_2_Weekday_Start_Minute.offset = 345;
    OutBack_Grid_Use_Interval_2_Weekday_Start_Minute.len = 1;
    OutBack_Grid_Use_Interval_2_Weekday_Start_Minute.units = "Hour";
    OutBack_Grid_Use_Interval_2_Weekday_Start_Minute.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_2_Weekday_Stop_Hour.offset = 346;
    OutBack_Grid_Use_Interval_2_Weekday_Stop_Hour.len = 1;
    OutBack_Grid_Use_Interval_2_Weekday_Stop_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_2_Weekday_Stop_Hour.access = Access::kReadWrite;


    OutBack_Grid_Use_Interval_2_Weekday_Stop_Minute.offset = 347;
    OutBack_Grid_Use_Interval_2_Weekday_Stop_Minute.len = 1;
    OutBack_Grid_Use_Interval_2_Weekday_Stop_Minute.units = "Hour";
    OutBack_Grid_Use_Interval_2_Weekday_Stop_Minute.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_3_Mode.offset = 348;
    OutBack_Grid_Use_Interval_3_Mode.len = 1;
    OutBack_Grid_Use_Interval_3_Mode.units = "Enumerated";
    OutBack_Grid_Use_Interval_3_Mode.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_3_Weekday_Start_Hour.offset = 349;
    OutBack_Grid_Use_Interval_3_Weekday_Start_Hour.len = 1;
    OutBack_Grid_Use_Interval_3_Weekday_Start_Hour.units = "Enumerated";
    OutBack_Grid_Use_Interval_3_Weekday_Start_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_3_Weekday_Start_Minute.offset = 350;
    OutBack_Grid_Use_Interval_3_Weekday_Start_Minute.len = 1;
    OutBack_Grid_Use_Interval_3_Weekday_Start_Minute.units = "Hour";
    OutBack_Grid_Use_Interval_3_Weekday_Start_Minute.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_3_Weekday_Stop_Hour.offset = 351;
    OutBack_Grid_Use_Interval_3_Weekday_Stop_Hour.len = 1;
    OutBack_Grid_Use_Interval_3_Weekday_Stop_Hour.units = "Hour";
    OutBack_Grid_Use_Interval_3_Weekday_Stop_Hour.access = Access::kReadWrite;

    OutBack_Grid_Use_Interval_3_Weekday_Stop_Minute.offset = 352;
    OutBack_Grid_Use_Interval_3_Weekday_Stop_Minute.len = 1;
    OutBack_Grid_Use_Interval_3_Weekday_Stop_Minute.units = "Hour";
    OutBack_Grid_Use_Interval_3_Weekday_Stop_Minute.access = Access::kReadWrite;

    OutBack_Load_Grid_Transfer_Mode.offset = 353;
    OutBack_Load_Grid_Transfer_Mode.len = 1;
    OutBack_Load_Grid_Transfer_Mode.units = "Enumerated";
    OutBack_Load_Grid_Transfer_Mode.access = Access::kReadWrite;

    OutBack_Load_Grid_Transfer_Threshold.offset = 354;
    OutBack_Load_Grid_Transfer_Threshold.len = 1;
    OutBack_Load_Grid_Transfer_Threshold.units = "kWatts";
    OutBack_Load_Grid_Transfer_Threshold.access = Access::kReadWrite;

    OutBack_Load_Grid_Transfer_Connect_Delay.offset = 355;
    OutBack_Load_Grid_Transfer_Connect_Delay.len = 1;
    OutBack_Load_Grid_Transfer_Connect_Delay.units = "Seconds";
    OutBack_Load_Grid_Transfer_Connect_Delay.access = Access::kReadWrite;

    OutBack_Load_Grid_Transfer_Disconnect_Delay.offset = 356;
    OutBack_Load_Grid_Transfer_Disconnect_Delay.len = 1;
    OutBack_Load_Grid_Transfer_Disconnect_Delay.units = "Seconds";
    OutBack_Load_Grid_Transfer_Disconnect_Delay.access = Access::kReadWrite;

    OutBack_Load_Grid_Transfer_Connect_Battery_Voltage.offset = 357;
    OutBack_Load_Grid_Transfer_Connect_Battery_Voltage.len = 1;
    OutBack_Load_Grid_Transfer_Connect_Battery_Voltage.units = "Volts";
    OutBack_Load_Grid_Transfer_Connect_Battery_Voltage.access = Access::kReadWrite;

    OutBack_Load_Grid_Transfer_Re_Connect_Battery_Voltage.offset = 358;
    OutBack_Load_Grid_Transfer_Re_Connect_Battery_Voltage.len = 1;
    OutBack_Load_Grid_Transfer_Re_Connect_Battery_Voltage.units = "Volts";
    OutBack_Load_Grid_Transfer_Re_Connect_Battery_Voltage.access = Access::kReadWrite;

    OutBack_Global_Charger_Control_Mode.offset = 359;
    OutBack_Global_Charger_Control_Mode.len = 1;
    OutBack_Global_Charger_Control_Mode.units = "Enumerated";
    OutBack_Global_Charger_Control_Mode.access = Access::kReadWrite;

    OutBack_Global_Charger_Control_Output_Limit.offset = 360;
    OutBack_Global_Charger_Control_Output_Limit.len = 1;
    OutBack_Global_Charger_Control_Output_Limit.units = "Amps";
    OutBack_Global_Charger_Control_Output_Limit.access = Access::kReadWrite;

    OutBack_Radian_AC_Coupled_Control_Mode.offset = 361;
    OutBack_Radian_AC_Coupled_Control_Mode.len = 1;
    OutBack_Radian_AC_Coupled_Control_Mode.units = "Enumerated";
    OutBack_Radian_AC_Coupled_Control_Mode.access = Access::kReadWrite;

    OutBack_Radian_AC_Coupled_AUX_Port.offset = 362;
    OutBack_Radian_AC_Coupled_AUX_Port.len = 1;
    OutBack_Radian_AC_Coupled_AUX_Port.units = "Port";
    OutBack_Radian_AC_Coupled_AUX_Port.access = Access::kReadWrite;

    OutBack_URL_Update_Lock.offset = 363;
    OutBack_URL_Update_Lock.len = 2;
    OutBack_URL_Update_Lock.units = "key";
    OutBack_URL_Update_Lock.access = Access::kReadWrite;

    OutBack_Web_Reporting_Base_URL.offset = 365;
    OutBack_Web_Reporting_Base_URL.len = 20;
    OutBack_Web_Reporting_Base_URL.access = Access::kReadWrite;

    OutBack_WEB_User_Logged_In_Status.offset = 385;
    OutBack_WEB_User_Logged_In_Status.len = 1;
    OutBack_WEB_User_Logged_In_Status.units = "Enumerated";
    OutBack_WEB_User_Logged_In_Status.access = Access::kReadWrite;

    OutBack_HUB_Type.offset = 386;
    OutBack_HUB_Type.len = 1;
    OutBack_HUB_Type.units = "Enumerated";
    OutBack_HUB_Type.access = Access::kRead;

    OutBack_HUB_Major_Firmware_Number.offset = 387;
    OutBack_HUB_Major_Firmware_Number.len = 1;
    OutBack_HUB_Major_Firmware_Number.access = Access::kRead;

    
    OutBack_HUB_Mid_Firmware_Number.offset = 388;
    OutBack_HUB_Mid_Firmware_Number.len = 1;
    OutBack_HUB_Mid_Firmware_Number.access = Access::kRead;

    OutBack_HUB_Minor_Firmware_Number.offset = 389;
    OutBack_HUB_Minor_Firmware_Number.len = 1;
    OutBack_HUB_Minor_Firmware_Number.access = Access::kRead;

    OutBack_Year.offset = 390;
    OutBack_Year.len = 1;
    OutBack_Year.access = Access::kReadWrite;

    OutBack_Month.offset = 391;
    OutBack_Month.len = 1;
    OutBack_Month.access = Access::kReadWrite;

    OutBack_Day.offset = 392;
    OutBack_Day.len = 1;
    OutBack_Day.access = Access::kReadWrite;

    OutBack_Hour.offset = 393;
    OutBack_Hour.len = 1;
    OutBack_Hour.access = Access::kReadWrite;

    OutBack_Minute.offset = 394;
    OutBack_Minute.len = 1;
    OutBack_Minute.access = Access::kReadWrite;

    OutBack_Second.offset = 395;
    OutBack_Second.len = 1;
    OutBack_Second.access = Access::kReadWrite;

    OutBack_Temp_Batt.offset = 396;
    OutBack_Temp_Batt.len = 1;
    OutBack_Temp_Batt.access = Access::kRead;

    OutBack_Temp_Ambient.offset = 397;
    OutBack_Temp_Ambient.len = 1;
    OutBack_Temp_Ambient.units = "Degrees_C";
    OutBack_Temp_Ambient.access = Access::kRead;

    OutBack_Temp_SF.offset = 398;
    OutBack_Temp_SF.len = 1;
    OutBack_Temp_SF.access = Access::kRead;

    OutBack_Error.offset = 399;
    OutBack_Error.len = 1;
    OutBack_Error.units = "Bitfield";
    OutBack_Error.access = Access::kRead;

    OutBack_Status.offset = 400;
    OutBack_Status.len = 1;
    OutBack_Status.units = "Bitfield";
    OutBack_Status.access = Access::kRead;

    OutBack_Update_Device_Firmware_Port.offset = 401;
    OutBack_Update_Device_Firmware_Port.len = 1;
    OutBack_Update_Device_Firmware_Port.units = "Bitfield";
    OutBack_Update_Device_Firmware_Port.access = Access::kReadWrite;

    OutBack_Gateway_Type.offset = 402;
    OutBack_Gateway_Type.len = 1;
    OutBack_Gateway_Type.units = "Enumerated";
    OutBack_Gateway_Type.access = Access::kRead;

    OutBack_System_Voltage.offset = 403;
    OutBack_System_Voltage.len = 1;
    OutBack_System_Voltage.units = "Volts";
    OutBack_System_Voltage.access = Access::kRead;

    OutBack_Measured_System_Voltage.offset = 404;
    OutBack_Measured_System_Voltage.len = 1;
    OutBack_Measured_System_Voltage.units = "Volts";
    OutBack_Measured_System_Voltage.access = Access::kRead;

    OutBack_AGS_AC_Reconnect_Delay.offset = 405;
    OutBack_AGS_AC_Reconnect_Delay.len = 1;
    OutBack_AGS_AC_Reconnect_Delay.units = "Minutes";
    OutBack_AGS_AC_Reconnect_Delay.access = Access::kReadWrite;

    OutBack_Multi_Phase_Coordination.offset = 406;
    OutBack_Multi_Phase_Coordination.len = 1;
    OutBack_Multi_Phase_Coordination.units = "Enumerated";
    OutBack_Multi_Phase_Coordination.access = Access::kReadWrite;
    
    OutBack_Sched_1_AC_Mode.offset = 407;
    OutBack_Sched_1_AC_Mode.len = 1;
    OutBack_Multi_Phase_Coordination.units = "Enumerated";
    OutBack_Multi_Phase_Coordination.access = Access::kReadWrite;

    OutBack_Sched_1_AC_Mode_Hour.offset = 408;
    OutBack_Sched_1_AC_Mode_Hour.len = 1;
    OutBack_Sched_1_AC_Mode_Hour.units = "Hour";
    OutBack_Sched_1_AC_Mode_Hour.access = Access::kReadWrite;

    OutBack_Sched_1_AC_Mode_Minute.offset = 409;
    OutBack_Sched_1_AC_Mode_Minute.len = 1;
    OutBack_Sched_1_AC_Mode_Minute.units = "Minute";
    OutBack_Sched_1_AC_Mode_Minute.access = Access::kReadWrite;

    OutBack_Sched_2_AC_Mode.offset = 410;
    OutBack_Sched_2_AC_Mode.len = 1;
    OutBack_Sched_2_AC_Mode.units = "Enumerated";
    OutBack_Sched_2_AC_Mode.access = Access::kReadWrite;

    OutBack_Sched_2_AC_Mode_Hour.offset = 411;
    OutBack_Sched_2_AC_Mode_Hour.len = 1;
    OutBack_Sched_2_AC_Mode_Hour.units = "Hour";
    OutBack_Sched_2_AC_Mode_Hour.access = Access::kReadWrite;

    OutBack_Sched_2_AC_Mode_Minute.offset = 412;
    OutBack_Sched_2_AC_Mode_Minute.len = 1;
    OutBack_Sched_2_AC_Mode_Hour.units = "Minute";
    OutBack_Sched_2_AC_Mode_Hour.access = Access::kReadWrite;

    OutBack_Sched_3_AC_Mode.offset = 413;
    OutBack_Sched_3_AC_Mode.len = 1;
    OutBack_Sched_3_AC_Mode.units = "Enumerated";
    OutBack_Sched_3_AC_Mode.access = Access::kReadWrite;

    OutBack_Sched_3_AC_Mode_Hour.offset = 414;
    OutBack_Sched_3_AC_Mode_Hour.len = 1;
    OutBack_Sched_3_AC_Mode_Hour.units = "Hour";
    OutBack_Sched_3_AC_Mode_Hour.access = Access::kReadWrite;

    OutBack_Sched_3_AC_Mode_Minute.offset = 415;
    OutBack_Sched_3_AC_Mode_Minute.len = 1;
    OutBack_Sched_3_AC_Mode_Minute.units = "Minute";
    OutBack_Sched_3_AC_Mode_Minute.access = Access::kReadWrite;

    OutBack_Auto_reboot.offset = 416;
    OutBack_Auto_reboot.len = 1;
    OutBack_Auto_reboot.units = "Enumerated";
    OutBack_Auto_reboot.access = Access::kReadWrite;

    OutBack_Spare_Reg_2.offset = 417;
    OutBack_Spare_Reg_2.len = 1;
    OutBack_Spare_Reg_2.access = Access::kReadWrite;

    OutBack_Spare_Reg_3.offset = 418;
    OutBack_Spare_Reg_3.len = 1;
    OutBack_Spare_Reg_3.access = Access::kReadWrite;

    OutBack_Spare_Reg_4.offset = 419;
    OutBack_Spare_Reg_4.len = 1;
    OutBack_Spare_Reg_4.access = Access::kReadWrite;




}

OutBack_Block::~OutBack_Block()
{
}