#pragma once

#include "ixblue_stdbin_decoder/data_models/navigation_data/position.h"
#include "ixblue_stdbin_decoder/data_serializer.h"

namespace ixblue_stdbin_decoder
{
namespace Serializer
{
class Position : public DataSerializer
{
public:
    Position() : DataSerializer(7, 21) { }
    bool serialize(boost::asio::mutable_buffer& outBuffer,
                   const Data::BinaryNav& binaryNav) override
    {
        if (!binaryNav.position.is_initialized()) {
            return false;
        }
        outBuffer << binaryNav.position.get().latitude_deg
                  << binaryNav.position.get().longitude_deg
                  << binaryNav.position.get().altitude_ref
                  << binaryNav.position.get().altitude_m;
        return true;
    }
};
} // namespace Serializer
} // namespace ixblue_stdbin_decoder
