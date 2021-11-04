#include "include/sunspec/common.hpp"

using namespace sunspec;

Common::Common(/* args */)
{
    id = "1";
    length = 66;
    name = "common";
    description = "All SunSpec compliant devices must include this as the first model";

    manufacturer.id = "Mn";
    manufacturer.offset = 0;
    manufacturer.len = 16;
    manufacturer.mandatory = true;

    model.id = "Md";
    model.offset = 16;
    model.len = 16;
    model.mandatory = true;

    options.id = "Opt";
    options.offset = 32;
    options.len = 8;

    version.id = "Vr";
    version.offset = 40;
    version.len = 8;

    serial_number.id = "SN";
    serial_number.offset = 48;
    serial_number.len = 16;
    serial_number.mandatory = true;

    device_address.id = "DA";
    device_address.offset = 64;
    device_address.access = Access::kReadWrite;
}

Common::~Common()
{
}