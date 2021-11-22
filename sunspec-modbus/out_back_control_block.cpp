#include"include/sunspec/out_back_control_block.hpp""


using namespace sunspec;

OutBack_Control_Block::OutBack_Control_Block(/*64120*/)

{
    id = "1";
    length = 27;
    name = "OutBack_System_Control_Block";
    description = "Vendor Extension 'for' OutBack System Control Block";

    OB_DC_Voltage_SF.offset = 0;
    OB_DC_Voltage_SF.len = 1;
    OB_DC_Voltage_SF.access = Access::kRead;

    OB_AC_Current_SF.offset = 1;
    OB_AC_Current_SF.len = 1;
    OB_AC_Current_SF.access = Access::kRead;

    OB_Time_SF.offset = 2;
    OB_Time_SF.len = 1;
    OB_Time_SF.access = Access::kRead;

    OB_Bulk_Charge_Enable_Disable.offset = 3;
    OB_Bulk_Charge_Enable_Disable.len = 1;
    OB_Bulk_Charge_Enable_Disable.units = "Enumerated";
    OB_Bulk_Charge_Enable_Disable.access = Access::kWrite;

    OB_Inverter_AC_Drop_Use.offset = 4;
    OB_Inverter_AC_Drop_Use.len = 1;
    OB_Inverter_AC_Drop_Use.units = "Enumerated";
    OB_Inverter_AC_Drop_Use.access = Access::kWrite;

    OB_Set_Inverter_Mode.offset = 5;
    OB_Set_Inverter_Mode.len = 1;
    OB_Set_Inverter_Mode.units = "Enumerated";
    OB_Set_Inverter_Mode.access = Access::kWrite;

    OB_Grid_Tie_Mode.offset = 6;
    OB_Grid_Tie_Mode.len = 1;
    OB_Grid_Tie_Mode.units = "Enumerated";
    OB_Grid_Tie_Mode.access = Access::kWrite;

    OB_Set_Inverter_Charger_Mode.offset = 7;
    OB_Set_Inverter_Charger_Mode.len = 1;
    OB_Set_Inverter_Charger_Mode.units = "Enumerated";
    OB_Set_Inverter_Charger_Mode.access = Access::kWrite;

    OB_Control_Status.offset = 8;
    OB_Control_Status.len = 1;
    OB_Control_Status.units = "Bitfield";
    OB_Control_Status.access = Access::kRead;

    OB_Set_Sell_Voltage.offset = 9;
    OB_Set_Sell_Voltage.len = 1;
    OB_Set_Sell_Voltage.units = "Volts";
    OB_Set_Sell_Voltage.access = Access::kReadWrite;

    OB_Set_Radian_Inverter_Sell_Current_Limit.offset = 10;
    OB_Set_Radian_Inverter_Sell_Current_Limit.len = 1;
    OB_Set_Radian_Inverter_Sell_Current_Limit.units = "Amps";
    OB_Set_Radian_Inverter_Sell_Current_Limit.access = Access::kReadWrite;

    OB_Set_Absorb_Voltage.offset = 11;
    OB_Set_Absorb_Voltage.len = 1;
    OB_Set_Absorb_Voltage.units = "Volts";
    OB_Set_Absorb_Voltage.access = Access::kReadWrite;

    OB_Set_Absorb_Time.offset = 12;
    OB_Set_Absorb_Time.len = 1;
    OB_Set_Absorb_Time.units = "Hours";
    OB_Set_Absorb_Time.access = Access::kReadWrite;

    OB_Set_Float_Voltage.offset = 13;
    OB_Set_Float_Voltage.len = 1;
    OB_Set_Float_Voltage.units = "Volts";
    OB_Set_Float_Voltage.access = Access::kReadWrite;

    OB_Set_Float_Time.offset = 14;
    OB_Set_Float_Time.len = 1;
    OB_Set_Float_Time.units = "Hours";
    OB_Set_Float_Time.access = Access::kReadWrite;

    OB_Set_Inverter_Charger_Current_Limit.offset = 15;
    OB_Set_Inverter_Charger_Current_Limit.len = 1;
    OB_Set_Inverter_Charger_Current_Limit.units = "Amps";
    OB_Set_Inverter_Charger_Current_Limit.access = Access::kReadWrite;

    OB_Set_Inverter_AC1_Current_Limit.offset = 16;
    OB_Set_Inverter_AC1_Current_Limit.len = 1;
    OB_Set_Inverter_AC1_Current_Limit.units = "Amps";
    OB_Set_Inverter_AC1_Current_Limit.access = Access::kReadWrite;

    OB_Set_Inverter_AC2_Current_Limit.offset = 17;
    OB_Set_Inverter_AC2_Current_Limit.len = 1;
    OB_Set_Inverter_AC2_Current_Limit.units = "Amps";
    OB_Set_Inverter_AC2_Current_Limit.access = Access::kReadWrite;

    OB_Set_AGS_OP_Mode.offset = 18;
    OB_Set_AGS_OP_Mode.len = 1;
    OB_Set_AGS_OP_Mode.units = "Enumerated";
    OB_Set_AGS_OP_Mode.access = Access::kReadWrite;

    OB_AGS_Operational_State.offset = 19;
    OB_AGS_Operational_State.len = 1;
    OB_AGS_Operational_State.units = "Enumerated";
    OB_AGS_Operational_State.access = Access::kRead;

    OB_AGS_Operational_State_Timer.offset = 20;
    OB_AGS_Operational_State_Timer.len = 1;
    OB_AGS_Operational_State_Timer.units = "Seconds";
    OB_AGS_Operational_State_Timer.access = Access::kRead;

    OB_Gen_Last_Run_Start_Time_GMT.offset = 21;
    OB_Gen_Last_Run_Start_Time_GMT.len = 2;
    OB_Gen_Last_Run_Start_Time_GMT.units = "Seconds";
    OB_Gen_Last_Run_Start_Time_GMT.access = Access::kRead;
    
    OB_Gen_Last_Start_Run_Duration.offset = 23;
    OB_Gen_Last_Start_Run_Duration.len = 2;
    OB_Gen_Last_Start_Run_Duration.units = "Seconds";
    OB_Gen_Last_Start_Run_Duration.access = Access::kRead;

    OB_Set_AC_Output_Freq_Offline_Mode.offset = 25;
    OB_Set_AC_Output_Freq_Offline_Mode.len = 1;
    OB_Set_AC_Output_Freq_Offline_Mode.access = Access::kReadWrite;

    OB_Set_AC_Output_Offline_Freq.offset = 26;
    OB_Set_AC_Output_Offline_Freq.len = 1;
    OB_Set_AC_Output_Offline_Freq.units = "Hz";
    OB_Set_AC_Output_Offline_Freq.access = Access::kReadWrite;


}



OutBack_Control_Block::~OutBack_Control_Block()
{

}