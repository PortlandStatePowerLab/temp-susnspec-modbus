#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"


namespace sunspec
{

    struct Radian_Inverter_Config_Block : public Block // Block 64116
    {
        Radian_Inverter_Config_Block();
        ~Radian_Inverter_Config_Block();

    
    
    private:
        //Point<uint16_t>GSConfig_Port_number;
        Point<uint16_t>GSconfig_Port_number;
        Point<int16_t>GSconfig_DC_Voltage_SF;
        Point<int16_t>GSconfig_AC_Current_SF;
        Point<int16_t>GSconfig_AC_Voltage_SF;
        Point<int16_t>GSconfig_Time_SF;
        Point<uint16_t>GSconfig_Major_Firmware_Number;
        Point<uint16_t>GSconfig_Mid_Firmware_Number;
        Point<uint16_t>GSconfig_Minor_Firmware_Number;
        Point<uint16_t>GSconfig_Absorb_Volts;
        Point<uint16_t>GSconfig_Absorb_Time_Hours;
        Point<uint16_t>GSconfig_Float_Volts;
        Point<uint16_t>GSconfig_Float_Time_Hours;
        Point<uint16_t>GSconfig_ReFloat_Volts;
        Point<uint16_t>GSconfig_EQ_Volts;
        Point<uint16_t>GSconfig_EQ_Time_Hours;
        Point<uint16_t>GSconfig_Search_Sensitivity;
        Point<uint16_t>GSconfig_Search_Pulse_Length;
        Point<uint16_t>GSconfig_Search_Pulse_Spacing;
        Point<uint16_t>GSconfig_AC_Input_Select_Priority;
        Point<uint16_t>GSconfig_Grid_AC_Input_Current_Limit;
        Point<uint16_t>GSconfig_Gen_AC_Input_Current_Limit;
        Point<uint16_t>GSconfig_Charger_AC_Input_Current_Limit;
        Point<uint16_t>GSconfig_Charger_Operating_Mode;
        Point<uint16_t>GSconfig_AC_Coupled;
        Point<uint16_t>GSconfig_Grid_Input_Mode;
        Point<uint16_t>GSconfig_Grid_Lower_Input_Voltage_Limit;
        Point<uint16_t>GSconfig_Grid_Upper_Input_Voltage_Limit;
        Point<uint16_t>GSconfig_Grid_Transfer_Delay;
        Point<uint16_t>GSconfig_Grid_Connect_Delay;
        Point<uint16_t>GSconfig_Gen_Input_Mode;
        Point<uint16_t>GSconfig_Gen_Lower_Input_Voltage_Limit;
        Point<uint16_t>GSconfig_Gen_Upper_Input_Voltage_Limit;
        Point<uint16_t>GSconfig_Gen_Transfer_Delay;
        Point<uint16_t>GSconfig_Gen_Connect_Delay;
        Point<uint16_t>GSconfig_AC_Output_Voltage;
        Point<uint16_t>GSconfig_Low_Battery_Cut_Out_Voltage;
        Point<uint16_t>GSconfig_Low_Battery_Cut_In_Voltage;
        Point<uint16_t>GSconfig_AUX_Mode;
        Point<uint16_t>GSconfig_AUX_Control;
        Point<uint16_t>GSconfig_AUX_ON_Battery_Voltage;
        Point<uint16_t>GSconfig_AUX_ON_Delay_Time;
        Point<uint16_t>GSconfig_AUX_OFF_Battery_Voltage;
        Point<uint16_t>GSconfig_AUX_OFF_Delay_Time;
        Point<uint16_t>GSconfig_AUX_Relay_Mode;
        Point<uint16_t>GSconfig_AUX_Relay_Control;
        Point<uint16_t>GSconfig_AUX_Relay_ON_Battery_Voltage;
        Point<uint16_t>GSconfig_AUX_Relay_ON_Delay_Time;
        Point<uint16_t>GSconfig_AUX_Relay_OFF_Battery_Voltage;
        Point<uint16_t>GSconfig_AUX_Relay_OFF_Delay_Time;
        Point<uint16_t>GSconfig_Stacking_Mode;
        Point<uint16_t>GSconfig_Master_Power_Save_Level;
        Point<uint16_t>GSconfig_Slave_Power_Save_Level;
        Point<uint16_t>GSconfig_Sell_Volts;
        Point<uint16_t>GSconfig_Grid_Tie_Window;
        Point<uint16_t>GSconfig_Grid_Tie_Enable;
        Point<int16_t>GSconfig_Grid_AC_Input_Voltage_Calibrate_Factor;
        Point<int16_t>GSconfig_Gen_AC_Input_Voltage_Calibrate_Factor;
        Point<int16_t>GSconfig_AC_Output_Voltage_Calibrate_Factor;
        Point<int16_t>GSconfig_Battery_Voltage_Calibrate_Factor;
        Point<uint16_t>GSconfig_ReBulk_Volts;
        Point<uint16_t>GSconfig_Mini_Grid_LBX_Volts;
        Point<uint16_t>GSconfig_Mini_Grid_LBX_Delay;
        Point<uint16_t>GSconfig_Grid_Zero_DoD_Volts;
        Point<uint16_t>GSconfig_Grid_Zero_DoD_Max_Offset_AC_Amps;
        Point<std::string>GSconfig_Serial_Number;   
        Point<std::string>GSconfig_Model_Number;
        Point<uint16_t>GSconfig_Module_Control;
        Point<uint16_t>GSconfig_Model_Select;
        Point<uint16_t>GSconfig_Low_Battery_Cut_Out_Delay;
        Point<uint16_t>GSconfig_High_Battery_Cut_Out_Voltage;
        Point<uint16_t>GSconfig_High_Battery_Cut_In_Voltage;
        Point<uint16_t>Gsconfig_High_Battery_Cut_Out_Delay;

    };

}