#ifndef __MODBUS_ADPTER_H__
#define __MODBUS_ADPTER_H__
#include <modbus/modbus_tcp.hpp>
#include "include/sunspec/common.hpp"

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
    };
    
} // namespace sunspec

#endif // __MODBUS-ADPTER_H__