#pragma once

#include "ixblue_stdbin_decoder/data_models/navigation_data/acceleration_vessel_frame_deviation.h"
#include "ixblue_stdbin_decoder/memory_block_parser.h"

namespace ixblue_stdbin_decoder
{
namespace Parser
{
class AccelerationVesselFrameDeviation : public MemoryBlockParser
{
public:
    AccelerationVesselFrameDeviation() : MemoryBlockParser(29, 12) {}
    void parse(boost::asio::const_buffer& buffer,
               Data::BinaryNav& outBinaryNav) override
    {
        Data::AccelerationVesselFrameDeviation res;
        buffer >> res.xv1_stddev_msec2 >> res.xv2_stddev_msec2 >> res.xv3_stddev_msec2;
        outBinaryNav.accelerationVesselFrameDeviation = res;
    }
};
} // namespace Parser
} // namespace ixblue_stdbin_decoder