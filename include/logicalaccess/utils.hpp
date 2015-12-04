#pragma once

#include <cstdint>
#include <cstddef>
#include <chrono>

/**
 * Platform independent utils.
 */

namespace logicalaccess
{
uint32_t lla_htonl(uint32_t in);
uint16_t lla_htons(uint16_t in);

/**
 * This class provide a simple to get the elapsed time since
 * it's creation.
 *
 * The precision of the counter is milliseconds.
 */
class ElapsedTimeCounter
{
  public:
    ElapsedTimeCounter();

    /**
     * Returns the elapsed time since the creation of
     * the ElapsedTimeCounter object.
     */
    size_t elapsed() const;

  private:
    using TimePoint = std::chrono::steady_clock::time_point;

    TimePoint creation_;
};
}
