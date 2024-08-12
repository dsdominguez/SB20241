#include <stdint.h>

long function(long input) {
    long result = input;

    while (result > 0) {
        result -= 1;
    }
    
    return result;
}

int main(int argc, char const *argv[])
{
    function(40);
    return 0;
}
