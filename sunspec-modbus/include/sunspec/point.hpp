#ifndef __POINT_H__
#define __POINT_H__
#include <cstdint>
#include <string>

namespace sunspec
{
    enum class Access : uint8_t
    {
        kRead,
        kReadWrite
    };

    enum class Category : uint8_t
    {
        kNone,
        kMeasurement,
        kMetered,
        kStatus,
        kEvent,
        kSetting,
        kControl
    };

    // pad has been assigned an unsigned int based on standard
    using Pad = int16_t;

    // pure virtual with template for the type of point
    template <typename T>
    struct Point
    {
        std::string id;
        uint8_t len = 1;
        uint16_t offset;
        T type;
        std::string sf;
        std::string units;
        Access access = Access::kRead;
        bool mandatory = false;
        Category category = Category::kMeasurement;
    };
} // namespace sunspec

#endif // __POINT_H__