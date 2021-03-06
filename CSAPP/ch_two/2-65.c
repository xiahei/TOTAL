#include <stdio.h>

/*
 * 每次取一半进行异或运算，同为1或0的运算完都为0，故抵消了偶数个1，
 * 到最后只有一位和一位异或，得到的结果就是多出来的1，多出1个说明
 * 有奇数个1，否则偶数个
 */


int even_ones (unsigned x)
{
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;

    return !(x & 1);
}
