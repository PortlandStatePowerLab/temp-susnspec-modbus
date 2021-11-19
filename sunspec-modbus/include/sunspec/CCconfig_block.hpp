#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"

namespace sunspec

{
    struct CCconfig_block : public Block // Block 64110
    {
        CCconfig_block();
        ~CCconfig_block();


        private:
        
        Point<uint16_t>CCconfig_Port_number;
        Point<int16_t>CCconfig_Voltage_SF;
        Point<int16_t>CCconfig_Current_SF;
        Point<int16_t>CCconfig_Hours_SF;
        Point<int16_t>CCconfig_Power_SF;
        Point<int16_t>CCconfig_AH_SF;
        Point<int16_t>CCconfig_KWH_SF;
        Point<uint16_t>CCconfig_Faults;
        Point<uint16_t>CCconfig_Absorb_Volts;
        Point<uint16_t>CCconfig_Absorb_Time_Hours;
        Point<uint16_t>CCconfig_Absorb_End_Amps;
        Point<uint16_t>CCconfig_Rebulk_Volts;
        Point<uint16_t>CCconfig_Float_Volts;
        Point<uint16_t>CCconfig_Bulk_Current;
        Point<uint16_t>CCconfig_EQ_Volts;
        Point<uint16_t>CCconfig_EQ_Time_Hours;
        Point<uint16_t>CCconfig_Auto_EQ_Days;
        Point<uint16_t>CCconfig_MPPT_Mode;
        Point<uint16_t>CCconfig_Sweep_Width;
        Point<uint16_t>CCconfig_Sweep_Max_Percentage;
        Point<uint16_t>CCconfig_U_Pick_PWM_Duty_Cycle;
        Point<uint16_t>CCconfig_Grid_Tie_Mode;
        Point<uint16_t>CCconfig_Temp_Comp_Mode;
        Point<uint16_t>CCconfig_Temp_Comp_Lower_Limit_Volts;
        Point<uint16_t>CCconfig_Temp_Comp_Upper_Limit_Volts;
        Point<uint16_t>CCconfig_Temp_Comp_Slope;
        Point<uint16_t>CCconfig_Auto_Restart_Mode;
        Point<uint16_t>CCconfig_Wakeup_VOC;
        Point<uint16_t>CCconfig_Snooze_Mode_Amps;
        Point<uint16_t>CCconfig_Wakeup_Interval;
        Point<uint16_t>CCconfig_AUX_Mode;
        Point<uint16_t>CCconfig_AUX_Control;
        Point<uint16_t>CCconfig_AUX_State;
        Point<uint16_t>CCconfig_AUX_Polarity;
        Point<uint16_t>CCconfig_AUX_Low_Batt_Disconnect;
        Point<uint16_t>CCconfig_AUX_Low_Batt_Reconnect;
        Point<uint16_t>CCconfig_AUX_Low_Batt_Disconnect_Delay;
        Point<uint16_t>CCconfig_AUX_Vent_Fan_Volts;
        Point<uint16_t>CCconfig_AUX_PV_Limit_Volts;
        Point<uint16_t>CCconfig_AUX_PV_Limit_Hold_Time;
        Point<uint16_t>CCconfig_AUX_Night_Light_Thres_Volts;
        Point<uint16_t>CCconfig_Night_Light_ON_Hours;
        Point<uint16_t>CCconfig_Night_Light_ON_Hyst_Time;
        Point<uint16_t>CCconfig_Night_Light_OFF_Hyst_Time;
        Point<uint16_t>CCconfig_AUX_Error_Battery_Volts;
        Point<uint16_t>CCconfig_AUX_Divert_Hold_Time;
        Point<uint16_t>CCconfig_AUX_Divert_Delay_Time;
        Point<uint16_t>CCconfig_AUX_Divert_Relative_Volts;
        Point<uint16_t>CCconfig_AUX_Divert_Hyst_Volts;
        Point<uint16_t>CCconfig_Major_Firmware_Number;
        Point<uint16_t>CCconfig_Mid_Firmware_Number;
        Point<uint16_t>CCconfig_Minor_Firmware_Number;
        Point<uint16_t>CCconfig_Set_Data_Log_Day_Offset;
        Point<uint16_t>CCconfig_Get_Current_Data_Log_Day_Offset;
        Point<uint16_t>CCconfig_Data_Log_Daily_AH;
        Point<uint16_t>CCconfig_Data_Log_Daily_kWH;
        Point<uint16_t>CCconfig_Data_Log_Daily_Max_Output_Amps;
        Point<uint16_t>CCconfig_Data_Log_Daily_Max_Output_Watts;
        Point<uint16_t>CCconfig_Data_Log_Daily_Absorb_Time;
        Point<uint16_t>CCconfig_Data_Log_Daily_Float_Time;
        Point<uint16_t>CCconfig_Data_Log_Daily_Min_Batt_Volts;
        Point<uint16_t>CCconfig_Data_Log_Daily_Max_Batt_Volts;
        Point<uint16_t>CCconfig_Data_Log_Daily_Max_Input_Volts;
        Point<uint16_t>CCconfig_Clear_Data_Log_Read;
        Point<uint16_t>CCconfig_Clear_Data_Log_Write_Complement;
        Point<uint16_t>CCconfig_Stats_Maximum_Reset_Read;
        Point<uint16_t>CCconfig_Stats_Maximum_Write_Complement;
        Point<uint16_t>CCconfig_Stats_Totals_Reset_Read;
        Point<uint16_t>CCconfig_Stats_Totals_Write_Complement;
        Point<int16_t>CCconfig_Battery_Voltage_Calibrate_Offset;
        Point<std::string>CCconfig_Serial_Number;
        Point<std::string>CCconfig_Model_Number;
    };


} // namespace sunspec;


