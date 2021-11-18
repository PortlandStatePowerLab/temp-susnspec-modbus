#include "include/sunspec/charge_controller_block.hpp"

using namespace sunspec;

Charge_Controller_Block::Charge_Controller_Block(/*arguments*/)
{
    id = "1";
    length = 26;
    name = "Charge_Controller_Block";
    description = "Uniquely identifies this as a SunSpec Basic Charge Controller";

    CC_Port_number.offset = 0;
    CC_Port_number.len = 1;
    CC_Port_number.access = Access::kRead;
    
    CC_Voltage_SF.offset = 1;
    CC_Voltage_SF.len = 2;
    CC_Voltage_SF.access = Access::kRead;

    CC_Current_SF.offset = 2;
    CC_Current_SF.len = 1;
    CC_Current_SF.access = Access::kRead;

    CC_Power_SF.offset = 3;
    CC_Power_SF.len = 1;
    CC_Power_SF.access = Access::kRead;

    CC_AH_SF.offset = 4;
    CC_AH_SF.len = 1;
    CC_AH_SF.access = Access::kRead;

    CC_KWH_SF.offset = 5;
    CC_KWH_SF.len = 1;
    CC_KWH_SF.access = Access::kRead;

    CC_Batt_Voltage.offset = 6;
    CC_Batt_Voltage.len = 1;
    CC_Batt_Voltage.units = "Volts";
    CC_Batt_Voltage.access = Access::kRead;

    CC_Array_Voltage.offset = 7;
    CC_Array_Voltage.len = 1;
    CC_Array_Voltage.units = "Volts";
    CC_Array_Voltage.access = Access::kRead;

    CC_Batt_Current.offset = 8;
    CC_Batt_Current.len = 1;
    CC_Batt_Current.units = "Amps";
    CC_Batt_Current.access = Access::kRead;

    CC_Array_Current.offset = 9;
    CC_Array_Current.len = 1;
    CC_Array_Current.units = "Amps";
    CC_Array_Current.access = Access::kRead;

    CC_Charger_State.offset = 10;
    CC_Charger_State.len = 1;
    CC_Charger_State.units = "Enumerated";
    CC_Charger_State.access = Access::kRead;

    CC_Watts.offset = 11;
    CC_Watts.len = 1;
    CC_Watts.units = "Watts";
    CC_Watts.access = Access::kRead;

    CC_Todays_Min_Battery_Volts.offset = 12;
    CC_Todays_Min_Battery_Volts.len = 1;
    CC_Todays_Min_Battery_Volts.units = "Volts";
    CC_Todays_Min_Battery_Volts.access = Access::kRead;

    CC_Todays_Max_Battery_Volts.offset = 13;
    CC_Todays_Max_Battery_Volts.len = 1;
    CC_Todays_Max_Battery_Volts.units = "Volts";
    CC_Todays_Max_Battery_Volts.access = Access::kRead;

    CC_VOC.offset = 14;
    CC_VOC.len = 1;
    CC_VOC.units = "Volts";
    CC_VOC.access = Access::kRead;

    CC_Todays_Peak_VOC.offset = 15;
    CC_Todays_Peak_VOC.len = 1;
    CC_Todays_Peak_VOC.units = "Volts";
    CC_Todays_Peak_VOC.access = Access::kRead;

    CC_Todays_kWH.offset = 16;
    CC_Todays_kWH.len = 1;
    CC_Todays_kWH.units = "KWH";
    CC_Todays_kWH.access = Access::kRead;

    CC_Todays_AH.offset = 17;
    CC_Todays_AH.len = 1;
    CC_Todays_AH.units = "AH";
    CC_Todays_AH.access = Access::kRead;

    CC_Lifetime_kWH_Hours.offset = 18;
    CC_Lifetime_kWH_Hours.len = 1;
    CC_Lifetime_kWH_Hours.units = "KWH";
    CC_Lifetime_kWH_Hours.access = Access::kRead;

    CC_Lifetime_kAmp_Hours.offset = 19;
    CC_Lifetime_kAmp_Hours.len = 1;
    CC_Lifetime_kAmp_Hours.units = "Amps";
    CC_Lifetime_kAmp_Hours.access = Access::kRead;

    CC_Lifetime_Max_Watts.offset = 20;
    CC_Lifetime_Max_Watts.len = 1;
    CC_Lifetime_Max_Watts.units = "Watts";
    CC_Lifetime_Max_Watts.access = Access::kRead;

    CC_Lifetime_Max_Battery_Volts.offset = 21;
    CC_Lifetime_Max_Battery_Volts.len = 1;
    CC_Lifetime_Max_Battery_Volts.units = "Volts";
    CC_Lifetime_Max_Battery_Volts.access = Access::kRead;

    CC_Lifetime_Max_VOC.offset = 22;
    CC_Lifetime_Max_VOC.len = 1;
    CC_Lifetime_Max_VOC.units = "Volts";
    CC_Lifetime_Max_VOC.access = Access::kRead;

    CC_Temp_SF.offset = 23;
    CC_Temp_SF.len = 1;
    CC_Temp_SF.access = Access::kRead;

    CC_Temp_Output_FETs.offset = 24;
    CC_Temp_Output_FETs.len = 1;
    CC_Temp_Output_FETs.units = "Degrees C";
    CC_Temp_Output_FETs.access = Access::kRead;

    CC_Temp_Enclosure.offset = 25;
    CC_Temp_Enclosure.len = 1;
    CC_Temp_Enclosure.units = "Degrees C";
    CC_Temp_Enclosure.access = Access::kRead;
}