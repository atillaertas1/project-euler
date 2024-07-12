#include <stdio.h>

int main()
{
    long long number = 600851475143;
    int largest_prime = 0;

    if (number % 2 == 0)
    {
        largest_prime = 2;
        number = number / 2;
    }

    printf("number -> %d\n", number);
    for (int i = 3; i * i <= number; i += 2)
    {
        printf("i -> %d\n", i);
        while(number % i == 0)
        {
            printf("---------------------------\n");
            largest_prime = i;
            printf("largest_prime -> %d\n", largest_prime);
            number = number / i;
            printf("number -> %d\n", number);
            printf("---------------------------\n");
        }
    }


    if (number > largest_prime){
        largest_prime = number;
    }
    printf("prime -- %d\n", largest_prime);

    return 0;
}