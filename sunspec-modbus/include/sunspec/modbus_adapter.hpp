#ifndef __MODBUS_ADPTER_H__
#define __MODBUS_ADPTER_H__
#include <modbus/modbus_tcp.hpp>

namespace sunspec
{
    class ModbusAdapter
    {
    public:
        ModbusAdapter();
        ~ModbusAdapter();

    private:
        ModbusTCP* modbus_tcp_;
    };
} // namespace sunspec

#endif // __MODBUS-ADPTER_H__