#include <stdio.h>

// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

int main()
{
    long long number = 600851475143;
    printf("%lld", number);
    int largest_prime = 0;

    if (number % 2 == 0)
    {
        largest_prime = 2;
        number = number / 2;
    }

    printf("number -> %lld\n", number);
    for (int i = 3; i * i <= number; i += 2)
    {
        printf("i -> %d\n", i);
        while (number % i == 0)
        {
            printf("---------------------------\n");
            largest_prime = i;
            printf("largest_prime -> %d\n", largest_prime);
            number = number / i;
            printf("number -> %lld\n", number);
            printf("---------------------------\n");
        }
    }

    if (number > largest_prime)
    {
        largest_prime = number;
    }
    printf("prime -- %d\n", largest_prime);

    return 0;
}