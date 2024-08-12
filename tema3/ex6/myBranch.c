#include <stdint.h>

int64_t function(int64_t input) {
    int64_t result = input;
    while (result > 0) {
        result >>= 1;
    }
    return result;
}
