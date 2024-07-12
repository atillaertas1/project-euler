#include <stdio.h>

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

int lcm(int a, int b)
{
    int lcm = 0;
    for (int i = a * b; i > 0; i--)
    {
        if ((i) % a == 0 && (i) % b == 0)
        {
            lcm = i;
        }
    }
    return lcm;
}

int main()
{
    long long x = 1;
    for (int i = 1; i < 20; i++)
    {
        x = lcm(x, i);
        printf("%d\n", x);
    }
    return 0;
}