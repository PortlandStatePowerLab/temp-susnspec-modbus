#include <string>
#include <cstdint>
#include "block.hpp"
#include "point.hpp"

namespace sunspec
{

    struct Common : public Block
    {
        Common();
        ~Common();

    private:
        Point<std::string> manufacturer;
        Point<std::string> model;
        Point<std::string> options;
        Point<std::string> version;
        Point<std::string> serial_number;
        Point<uint16_t> device_address;
    };
} // namespace sunspec
