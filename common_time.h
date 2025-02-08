#pragma once

#define TIME_OFFSET(source, offset) (source + offset)
#define TIME_PASSED(now, target) ((int64_t)((now) - (target)) >= 0)

#define uS_TO_MS(us) ((us) / 1000)
#define MS_TO_uS(ms) ((ms) * 1000)

#define TIME_FLIP_FLOP(now, interval) ((now / interval) % 2)