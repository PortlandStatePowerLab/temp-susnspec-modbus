#include "include/sunspec/sunspec_inverter_three_phase.hpp"

using namespace sunspec;

SunSpec_Inverter_Three_Phase::SunSpec_Inverter_Three_Phase(/*103*/)
{
    id = "1";
    length = 50;
    name = "SunSpec_Inverter_Single_Phase";
    description = "Uniquely identifies this as a SunSpec Single Phase Inverter";

    I_AC_Current.offset = 0;
    I_AC_Current.len = 1;
    I_AC_Current.units = "Amps";
    I_AC_Current.access = Access::kRead;

    I_AC_CurrentA.offset = 1;
    I_AC_CurrentA.len = 1;
    I_AC_CurrentA.units = "Amps";
    I_AC_CurrentA.access = Access::kRead;

    I_AC_CurrentB.offset = 2;
    I_AC_CurrentB.len = 1;
    I_AC_CurrentB.units = "Amps";
    I_AC_CurrentB.access = Access::kRead;
    
    I_AC_CurrentC.offset = 3;
    I_AC_CurrentC.len = 1;
    I_AC_CurrentC.units = "Amps";
    I_AC_CurrentC.access = Access::kRead;

    I_AC_Current_SF.offset = 4;
    I_AC_Current_SF.len = 1;
    I_AC_Current_SF.units ="SF";
    I_AC_Current_SF.access = Access::kRead;

    I_AC_VoltageAB.offset = 5;
    I_AC_VoltageAB.len = 1;
    I_AC_VoltageAB.units = "Volts";
    I_AC_VoltageAB.access = Access::kRead;

    I_AC_VoltageBC.offset = 6;
    I_AC_VoltageBC.len = 1;
    I_AC_VoltageBC.units = "Volts";
    I_AC_VoltageBC.access = Access::kRead;

    I_AC_VoltageCA.offset = 7;
    I_AC_VoltageCA.len = 1;
    I_AC_VoltageCA.units = "Volts";
    I_AC_VoltageCA.access = Access::kRead;

    I_AC_VoltageAN.offset = 8;
    I_AC_VoltageAN.len = 1;
    I_AC_VoltageAN.units = "Volts";
    I_AC_VoltageAN.access = Access::kRead;

    I_AC_VoltageBN.offset = 9;
    I_AC_VoltageBN.len = 1;
    I_AC_VoltageBN.units = "Volts";
    I_AC_VoltageBN.access = Access::kRead;

    I_AC_VoltageCN.offset = 10;
    I_AC_VoltageCN.len = 1;
    I_AC_VoltageCN.units = "Volts";
    I_AC_VoltageCN.access = Access::kRead;

    I_AC_Voltage_SF.offset = 11;
    I_AC_Voltage_SF.len = 1;
    I_AC_Voltage_SF.units = "SF";
    I_AC_Voltage_SF.access = Access::kRead;

    I_AC_Power.offset = 12;
    I_AC_Power.len = 1;
    I_AC_Power.units = "Watts";
    I_AC_Power.access = Access::kRead;

    I_AC_Power_SF.offset = 13;
    I_AC_Power_SF.len = 1;
    I_AC_Power_SF.units = "SF";
    I_AC_Power_SF.access = Access::kRead;

    I_AC_Frequency.offset = 14;
    I_AC_Frequency.len = 1;
    I_AC_Frequency.units = "Herz";
    I_AC_Frequency.access = Access::kRead;

    I_AC_Frequency_SF.offset = 15;
    I_AC_Frequency_SF.len = 1;
    I_AC_Frequency_SF.units = "SF";
    I_AC_Frequency_SF.access = Access::kRead;
    
    I_AC_VA.offset = 16;
    I_AC_VA.len = 1;
    I_AC_VA.units = "VA";
    I_AC_VA.access = Access::kRead;

    I_AC_VA_SF.offset = 17;
    I_AC_VA_SF.len = 1;
    I_AC_VA_SF.units = "SF";
    I_AC_VA_SF.access = Access::kRead;

    I_AC_VAR.offset = 18;
    I_AC_VAR.len = 1;
    I_AC_VAR.units = "VAR";
    I_AC_VAR.access = Access::kRead;

    I_AC_VAR_SF.offset = 19;
    I_AC_VAR_SF.len = 1;
    I_AC_VAR_SF.units = "SF";
    I_AC_VAR_SF.access = Access::kRead;

    I_AC_PF.offset = 20;
    I_AC_PF.len = 1;
    I_AC_PF.units = "%";
    I_AC_PF.access = Access::kRead;

    I_AC_PF_SF.offset = 21;
    I_AC_PF_SF.len = 1;
    I_AC_PF_SF.units = "SF";
    I_AC_PF_SF.access = Access::kRead;


    I_AC_Energy_WH.offset = 22;
    I_AC_Energy_WH.len = 2;
    I_AC_Energy_WH.units = "WattHour";
    I_AC_Energy_WH.access = Access::kRead;

    I_AC_Energy_WH_SF.offset = 24;
    I_AC_Energy_WH_SF.len = 1;
    I_AC_Energy_WH_SF.units = "SF";
    I_AC_Energy_WH_SF.access = Access::kRead;

    I_DC_Current.offset = 25;
    I_DC_Current.len = 1;
    I_DC_Current.units = "Amps";
    I_DC_Current.access = Access::kRead;

    I_DC_Current_SF.offset = 26;
    I_DC_Current_SF.len = 1;
    I_DC_Current_SF.units = "SF";
    I_DC_Current_SF.access = Access::kRead;

    I_DC_Voltage.offset = 27;
    I_DC_Voltage.len = 1;
    I_DC_Voltage.units = "Volts";
    I_DC_Voltage.access = Access::kRead;

    I_DC_Voltage_SF.offset = 28;
    I_DC_Voltage_SF.len = 1;
    I_DC_Voltage_SF.units = "Volts";
    I_DC_Voltage_SF.access = Access::kRead;

    I_DC_Power.offset = 29;
    I_DC_Power.len = 1;
    I_DC_Power.units = "Watt";
    I_DC_Power.access = Access::kRead;

    I_DC_Power_SF.offset = 30;
    I_DC_Power_SF.len = 1;
    I_DC_Power_SF.units = "SF";
    I_DC_Power_SF.access = Access::kRead;

    I_Temp_Cab.offset = 31;
    I_Temp_Cab.len = 1;
    I_Temp_Cab.units = "Degree C";
    I_Temp_Cab.access = Access::kRead;
    
    I_Temp_Sink.offset = 32;
    I_Temp_Sink.len = 1;
    I_Temp_Sink.units = "Degree C";
    I_Temp_Sink.access = Access::kRead;
    
    I_Temp_Trans.offset = 33;
    I_Temp_Trans.len = 1;
    I_Temp_Trans.units = "Degree C";
    I_Temp_Trans.access = Access::kRead;

    I_Temp_Other.offset = 34;
    I_Temp_Other.len = 1;
    I_Temp_Other.units = "Degree C";
    I_Temp_Other.access = Access::kRead;

    I_Temp_SF.offset = 35;
    I_Temp_SF.len = 1;
    I_Temp_SF.units = "SF";
    I_Temp_SF.access = Access::kRead;

    I_Status.offset = 36;
    I_Status.len = 1;
    I_Status.units = "Enumerated";
    I_Status.access = Access::kRead;

    I_Status_Vendor.offset = 37;
    I_Status_Vendor.len = 1;
    I_Status_Vendor.units = "Enumerated";
    I_Status_Vendor.access = Access::kRead;
    
    I_Event_1.offset = 38;
    I_Event_1.len = 2;
    I_Event_1.units = "Bitfield";
    I_Event_1.access = Access::kRead;

    I_Event_2.offset = 40;
    I_Event_2.len = 2;
    I_Event_2.units = "Bitfield";
    I_Event_2.access = Access::kRead;

    I_Event_1_Vendor.offset = 42;
    I_Event_1_Vendor.len = 2;
    I_Event_1_Vendor.units = "Bitfield";
    I_Event_1_Vendor.access = Access::kRead;

    I_Event_2_Vendor.offset = 44;
    I_Event_2_Vendor.len = 2;
    I_Event_2_Vendor.units = "Bitfield";
    I_Event_2_Vendor.access = Access::kRead;

    I_Event_3_Vendor.offset = 46;
    I_Event_3_Vendor.len = 2;
    I_Event_3_Vendor.units = "Bitfield";
    I_Event_3_Vendor.access = Access::kRead;

    I_Event_4_Vendor.offset = 48;
    I_Event_4_Vendor.len = 2;
    I_Event_4_Vendor.units = "Bitfield";
    I_Event_4_Vendor.access = Access::kRead;



}


SunSpec_Inverter_Three_Phase::~SunSpec_Inverter_Three_Phase()
{

}