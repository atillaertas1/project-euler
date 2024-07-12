#include <stdio.h>

// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

int check_palindrom(int number)
{
    // abcdef
    int f = number % 10;
    int e = (number % 100) / 10;
    int d = (number % 1000) / 100;
    int c = (number % 10000) / 1000;
    int b = (number % 100000) / 10000;
    int a = (number % 1000000) / 100000;

    if (a == f && b == e && c == d)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int palindrom;
    int control = -1;

    int start = 999;
    int end = 900;
    while (control == -1)
    {
        for (int i = start; i >= end; i--)
        {
            for (int j = i; j >= end; j--)
            {
                int palindrom = i * j;
                control = check_palindrom(palindrom);
                printf("control --> %d palindrom --> %d %dx%d\n ", control, palindrom, i, j);
                if (control == 1)
                {
                    printf("-------------------------------------\n");
                    printf("MAX PALINDROM -- %d\n", palindrom);
                    printf("-------------------------------------\n");

                    return 0;
                }
            }
        }
        start -= 100;
        end -= 100;
        if (start < 199)
        {
            return 0;
        }
    }

    return 0;
}