#pragma once

#define ARR_SIZE(x) (sizeof(x) / sizeof(x[0]))
#define ARR_INDEX_CHECK(arr, idx) (idx >= 0 && idx < ARR_SIZE(arr))