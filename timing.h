#pragma once

#define TIME_INCREMENT_CLAMP(source, offset, maximum) \
    (((maximum) - (source) < (offset)) ? (maximum) : ((source) + (offset)))

#define TIME_DECREMENT_CLAMP(source, offset, minimum) \
    (((source) - (minimum) < (offset)) ? (minimum) : ((source) - (offset)))


#define TIME_OFFSET(source, offset) (source + offset)
#define TIME_PASSED(now, target) ((int32_t)((now) - (target)) >= 0)

#define uS_TO_MS(us) ((us) / 1000)
#define MS_TO_uS(ms) ((ms) * 1000)

#define TIME_FLIP_FLOP(now, interval) ((now / interval) % 2)
#define TIME_INTERVAL(now, interval) ((now % interval) == 0)