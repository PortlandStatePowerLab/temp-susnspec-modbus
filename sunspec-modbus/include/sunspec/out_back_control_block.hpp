#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"

namespace sunspec 
{

struct OutBack_Control_Block : public Block    /* data   64120     */  
{
    
OutBack_Control_Block();
~OutBack_Control_Block();

private:

Point<int16_t> OB_DC_Voltage_SF;
Point<int16_t>OB_AC_Current_SF;
Point<int16_t>OB_Time_SF;
Point<uint16_t>OB_Bulk_Charge_Enable_Disable;
Point<uint16_t>OB_Inverter_AC_Drop_Use;
Point<uint16_t>OB_Set_Inverter_Mode;
Point<uint16_t>OB_Grid_Tie_Mode;
Point<uint16_t>OB_Set_Inverter_Charger_Mode;
Point<uint16_t>OB_Control_Status;
Point<uint16_t>OB_Set_Sell_Voltage;
Point<uint16_t>OB_Set_Radian_Inverter_Sell_Current_Limit;
Point<uint16_t>OB_Set_Absorb_Voltage;
Point<uint16_t>OB_Set_Absorb_Time;
Point<uint16_t>OB_Set_Float_Voltage;
Point<uint16_t>OB_Set_Float_Time;
Point<uint16_t>OB_Set_Inverter_Charger_Current_Limit;
Point<uint16_t>OB_Set_Inverter_AC1_Current_Limit;
Point<uint16_t>OB_Set_Inverter_AC2_Current_Limit;
Point<uint16_t>OB_Set_AGS_OP_Mode;
Point<uint16_t>OB_AGS_Operational_State;
Point<uint16_t>OB_AGS_Operational_State_Timer;
Point<uint32_t>OB_Gen_Last_Run_Start_Time_GMT;
Point<uint32_t>OB_Gen_Last_Start_Run_Duration;
Point<uint16_t>OB_Set_AC_Output_Freq_Offline_Mode;
Point<uint16_t>OB_Set_AC_Output_Offline_Freq;
};

}