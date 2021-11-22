#ifndef __MODBUS_ADPTER_H__
#define __MODBUS_ADPTER_H__
#include <modbus/modbus_tcp.hpp>
#include "include/sunspec/common.hpp"
#include "include/sunspec/OutBack_Block.hpp"

namespace sunspec
{
    class ModbusAdapter
    {
    public:
        ModbusAdapter();
        ~ModbusAdapter();
        void Query ();

    private:
        ModbusTCP* modbus_tcp_;
        sunspec::Common common_;
        sunspec::OutBack_Block outback_block_;
        sunspec::Charge_Controller_Block charge_controller_block_;
        sunspec::CCconfig_block cc_config_block_;
        sunspec::Split_phase_radian_inverter_real_time split_phase_radian_inverter_real_time;
        sunspec::Radian_Inverter_Config_Block radian_inverter_config_block_;
        sunspec::Single_Phase_Radian_Inverter_Real_Time_Block single_phase_radian_inverter_real_time_block_; 
        sunspec::OutBack_Control_Block outback_control_block_;
    
    };
    
} // namespace sunspec

#endif // __MODBUS-ADPTER_H__