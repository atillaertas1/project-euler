#include<stdio.h>

int check_prime(int number){
    if(number == 2){
        printf("%d is a prime number\n",number);
        return 1;
    }
    if(number % 2 == 0 || number < 2){
        printf("%d is not a prime number\n", number);
        return 0;
    }
    else{
        for(int i = 3; i * i <= number; i+=2){
            if(number % i == 0){
                printf("%d is not a prime number\n", number);
                return 0;
            }
        }
    }
    printf("%d is a prime number\n", number);
    return 1;
}

int main(){
    int counter = 0;
    int number = 0;

    while(counter != 10001){
        number++;
        if(check_prime(number) == 1){
            counter++;
        }
    }
    printf("result = %d",number);
    return 0;
}