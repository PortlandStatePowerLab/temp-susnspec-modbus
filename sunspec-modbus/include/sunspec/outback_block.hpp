#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"



namespace sunspec
{

    struct OutBack_Block : public Block // Block 64110
    {
        OutBack_Block();
        ~OutBack_Block();

    
    private:
        Point<uint16_t> OutBack_Major_Firmware_Number;
        Point<uint16_t> OutBack_Mid_Firmware_Number;
        Point<uint16_t> OutBack_Minor_Firmware_Number;
        Point<uint16_t> OutBack_Encryption_Key;
        Point<std::string> OutBack_MAC_Address;
        Point<std::string> OutBack_Write_Password;
        Point<uint16_t> OutBack_Enable_DHCP;
        Point<uint16_t> OutBack_TCP_IP_Address;
        Point<uint32_t> OutBack_TCP_IP_Gateway_MSW;
        Point<uint32_t> OutBack_TCP_IP_Netmask_MSW;
        Point<uint32_t> OutBack_TCP_IP_DNS_1_MSW;
        Point<uint32_t> OutBack_TCP_IP_DNS_2_MSW;
        Point<uint16_t> OutBack_Modbus_Port;
        Point<std::string> OutBack_SMTP_Server_Name;
        Point<std::string> OutBack_SMTP_Account_Name;
        Point<uint16_t> OutBack_SMTP_SSL_Enable;
        Point<std::string> OutBack_SMTP_Email_Password;
        Point<std::string> OutBack_SMTP_Email_User_Name;
        Point<std::string> OutBack_Status_Email_Interval;
        Point<std::string> OutBack_Status_Email_Status_Time;
        Point<std::string> OutBack_Status_Email_Subject_Line;
        Point<std::string> OutBack_Status_Email_To_Address_1;
        Point<std::string> OutBack_Status_Email_To_Address_2;
        Point<std::string> OutBack_Alarm_Email_Enable;
        Point<std::string> OutBack_Alarm_Email_Subject_Line;
        Point<std::string> OutBack_Alarm_Email_To_Address_1;
        Point<std::string> OutBack_Alarm_Email_To_Address_2;
        Point<std::string> OutBack_FTP_Password;
        Point<std::string> OutBack_Telnet_Password;
        Point<uint16_t> OutBack_SD_Card_Data_Log_Write_Interval;
        Point<uint16_t>OutBack_SD_Card_Data_Log_Retain_Days;
        Point<uint16_t>OutBack_SD_Card_Data_Logging_Mode;
        Point<std::string>OutBack_Time_Server_Name;
        Point<uint16_t>OutBack_Enable_Time_Server;
        Point<int16_t>OutBack_Set_Time_Zone;
        Point<uint16_t>OutBack_Enable_Float_Coordination;
        Point<uint16_t>OutBack_Enable_FNDC_Charge_Termination;
        Point<uint16_t>OutBack_Enable_FNDC_Grid_Tie_Control;
        Point<int16_t>OutBack_Voltage_SF;
        Point<int16_t>OutBack_Hour_SF;
        Point<uint16_t>OutBack_AGS_Mode;
        Point<uint16_t>OutBack_AGS_Port;
        Point<uint16_t>OutBack_AGS_Port_Type;
        Point<uint16_t>OutBack_AGS_Generator_Type;
        Point<uint16_t>OutBack_AGS_DC_Gen_Absorb_Voltage;
        Point<uint16_t>OutBack_AGS_DC_Gen_Absorb_Time;
        Point<uint16_t>OutBack_AGS_Fault_Time;
        Point<uint16_t>OutBack_AGS_Gen_Cool_Down_Time;
        Point<uint16_t>OutBack_AGS_Gen_Warm_Up_Time;
        Point<uint16_t>OutBack_AGS_Generator_Exercise_Mode;
        Point<uint16_t>OutBack_AGS_Exercise_Start_Hour;
        Point<uint16_t>OutBack_AGS_Exercise_Start_Minute;
        Point<uint16_t>OutBack_AGS_Exercise_Day;
        Point<uint16_t>OutBack_AGS_Exercise_Period;
        Point<uint16_t>OutBack_AGS_Exercise_Interval;
        Point<uint16_t>OutBack_AGS_Sell_Mode;
        Point<uint16_t>OutBack_AGS_2_Min_Start_Mode;
        Point<uint16_t>OutBack_AGS_2_Min_Start_Voltage;
        Point<uint16_t>OutBack_AGS_2_Hour_Start_Mode;
        Point<uint16_t>OutBack_AGS_2_Hour_Start_Voltage;
        Point<uint16_t>OutBack_AGS_24_Hour_Start_Mode;
        Point<uint16_t>OutBack_AGS_24_Hour_Start_Voltage;
        Point<uint16_t>OutBack_AGS_Load_Start_Mode;
        Point<uint16_t>OutBack_AGS_Load_Start_kW;
        Point<uint16_t>OutBack_AGS_Load_Start_Delay;
        Point<uint16_t>OutBack_AGS_Load_Stop_kW;
        Point<uint16_t>OutBack_AGS_Load_Stop_Delay;
        Point<uint16_t>OutBack_AGS_SOC_Start_Mode;
        Point<uint16_t>OutBack_AGS_SOC_Start_Percentage;
        Point<uint16_t>OutBack_AGS_SOC_Stop_Percentage;
        Point<uint16_t>OutBack_AGS_Enable_Full_Charge_Mode;
        Point<uint16_t>OutBack_AGS_Full_Charge_Interval;
        Point<uint16_t>OutBack_AGS_Must_Run_Mode;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekday_Start_Hour;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekday_Start_Minute;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekday_Stop_Hour;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekday_Stop_Minute;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekend_Start_Hour;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekend_Start_Minute;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekend_Stop_Hour;
        Point<uint16_t>OutBack_AGS_Must_Run_Weekend_Stop_Minute;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Mode;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekday_Start_Hour;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekday_Start_Minute;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekday_Stop_Hour;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekday_Stop_Minute;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekend_Start_Hour;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekend_Start_Minute;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekend_Stop_Hour;
        Point<uint16_t>OutBack_AGS_Quiet_Time_Weekend_Stop_Minute;
        Point<uint32_t>OutBack_AGS_Total_Generator_Run_Time;
        Point<uint16_t>OutBack_HBX_Mode;
        Point<uint16_t>OutBack_HBX_Grid_Connect_Voltage;
        Point<uint16_t>OutBack_HBX_Grid_Connect_Delay;
        Point<uint16_t>OutBack_HBX_Grid_Disconnect_Voltage;
        Point<uint16_t>OutBack_HBX_Grid_Disconnect_Delay;
        Point<uint16_t>OutBack_HBX_Grid_Connect_SOC;
        Point<uint16_t>OutBack_HBX_Grid_Disconnect_SOC;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Mode;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekday_Start_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekday_Start_Minute;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekday_Stop_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekday_Stop_Minute;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekend_Start_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekend_Start_Minute;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekend_Stop_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_1_Weekend_Stop_Minute;
        Point<uint16_t>OutBack_Grid_Use_Interval_2_Mode;
        Point<uint16_t>OutBack_Grid_Use_Interval_2_Weekday_Start_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_2_Weekday_Start_Minute;
        Point<uint16_t>OutBack_Grid_Use_Interval_2_Weekday_Stop_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_2_Weekday_Stop_Minute;
        Point<uint16_t>OutBack_Grid_Use_Interval_3_Mode;
        Point<uint16_t>OutBack_Grid_Use_Interval_3_Weekday_Start_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_3_Weekday_Start_Minute;
        Point<uint16_t>OutBack_Grid_Use_Interval_3_Weekday_Stop_Hour;
        Point<uint16_t>OutBack_Grid_Use_Interval_3_Weekday_Stop_Minute;
        Point<uint16_t>OutBack_Load_Grid_Transfer_Mode;
        Point<uint16_t>OutBack_Load_Grid_Transfer_Threshold;
        Point<uint16_t>OutBack_Load_Grid_Transfer_Connect_Delay;
        Point<uint16_t>OutBack_Load_Grid_Transfer_Disconnect_Delay;
        Point<uint16_t>OutBack_Load_Grid_Transfer_Connect_Battery_Voltage;
        Point<uint16_t>OutBack_Load_Grid_Transfer_Re_Connect_Battery_Voltage;
        Point<uint16_t>OutBack_Global_Charger_Control_Mode;
        Point<uint16_t>OutBack_Global_Charger_Control_Output_Limit;
        Point<uint16_t>OutBack_Radian_AC_Coupled_Control_Mode;
        Point<uint16_t>OutBack_Radian_AC_Coupled_AUX_Port;
        Point<uint16_t>OutBack_URL_Update_Lock;
        Point<uint16_t>OutBack_Web_Reporting_Base_URL;
        Point<uint16_t>OutBack_WEB_User_Logged_In_Status;
        Point<uint16_t>OutBack_HUB_Type;
        Point<uint16_t>OutBack_HUB_Major_Firmware_Number;
        Point<uint16_t>OutBack_HUB_Mid_Firmware_Number;
        Point<uint16_t>OutBack_HUB_Minor_Firmware_Number;
        Point<uint16_t>OutBack_Year;
        Point<uint16_t>OutBack_Month;
        Point<uint16_t>OutBack_Day;
        Point<uint16_t>OutBack_Hour;
        Point<uint16_t>OutBack_Minute;
        Point<uint16_t>OutBack_Second;
        Point<uint16_t>OutBack_Temp_Batt;
        Point<uint16_t>OutBack_Temp_Ambient;
        Point<uint16_t>OutBack_Temp_SF;
        Point<uint16_t>OutBack_Error;
        Point<uint16_t>OutBack_Status;
        Point<uint16_t>OutBack_Update_Device_Firmware_Port;
        Point<uint16_t>OutBack_Gateway_Type;
        Point<uint16_t>OutBack_System_Voltage;
        Point<uint16_t>OutBack_Measured_System_Voltage;
        Point<uint16_t>OutBack_AGS_AC_Reconnect_Delay;
        Point<uint16_t>OutBack_Multi_Phase_Coordination;
        Point<uint16_t>OutBack_Sched_1_AC_Mode;
        Point<uint16_t>OutBack_Sched_1_AC_Mode_Hour;
        Point<uint16_t>OutBack_Sched_1_AC_Mode_Minute;
        Point<uint16_t>OutBack_Sched_2_AC_Mode;
        Point<uint16_t>OutBack_Sched_2_AC_Mode_Hour;
        Point<uint16_t>OutBack_Sched_2_AC_Mode_Minute;
        Point<uint16_t>OutBack_Sched_3_AC_Mode;
        Point<uint16_t>OutBack_Sched_3_AC_Mode_Hour;
        Point<uint16_t>OutBack_Sched_3_AC_Mode_Minute;
        Point<uint16_t>OutBack_Auto_reboot;
        Point<uint16_t>OutBack_Spare_Reg_2;
        Point<uint16_t>OutBack_Spare_Reg_3;
        Point<uint16_t>OutBack_Spare_Reg_4;
    /*
    private:
        Point<std::string> manufacturer;
        Point<std::string> model;
        Point<std::string> options;
        Point<std::string> version;
        Point<std::string> serial_number;
        Point<uint16_t> device_address;
    */
    };
} // namespace sunspec