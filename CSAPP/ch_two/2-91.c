#include <stdio.h>
typedef unsigned float_bits;
int main (void)
{
    return 0;
}

float_bits float_absval (float_bits f)
{
    unsigned exp = f >> 23 & 0xff;
    unsigned frac = f & 0x7fffff;

    if (exp == 0xff && frac != 0)
        return f;

    return (exp << 23) | frac;
}
