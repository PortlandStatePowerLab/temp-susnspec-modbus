#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"

namespace sunspec
{
 struct Charge_Controller_Block : public Block // Block 64111
    {
        Charge_Controller_Block();
        ~Charge_Controller_Block();


    private:
        Point<uint16_t> CC_Port_number;
        Point<int16_t> CC_Voltage_SF;
        Point<int16_t> CC_Current_SF;
        Point<int16_t> CC_Power_SF;
        Point<int16_t> CC_AH_SF;
        Point<int16_t> CC_KWH_SF;
        Point<uint16_t> CC_Batt_Voltage;
        Point<uint16_t> CC_Array_Voltage;
        Point<uint16_t> CC_Batt_Current;
        Point<uint16_t> CC_Array_Current;
        Point<uint16_t> CC_Charger_State;
        Point<uint16_t> CC_Watts;
        Point<uint16_t> CC_Todays_Min_Battery_Volts;
        Point<uint16_t> CC_Todays_Max_Battery_Volts;
        Point<uint16_t> CC_VOC;
        Point<uint16_t> CC_Todays_Peak_VOC;
        Point<uint16_t> CC_Todays_kWH;
        Point<uint16_t> CC_Todays_AH;
        Point<uint16_t> CC_Lifetime_kWH_Hours;
        Point<uint16_t> CC_Lifetime_kAmp_Hours;
        Point<uint16_t> CC_Lifetime_Max_Battery_Volts;
        Point<uint16_t> CC_Lifetime_Max_VOC;
        Point<uint16_t> CC_Temp_SF;
        Point<uint16_t> CC_Temp_Output_FETs;
        Point<uint16_t> CC_Temp_Enclosure;
        

    }
}