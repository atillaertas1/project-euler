#include<stdio.h>
#include<stdlib.h>

int sum_of_squares(int number){
    int sum = 0;

    for(int i = 1; i <= number; i++){
        sum += i*i;
    }

    printf("sum of squares = %d\n",sum);
    return sum;
}

int square_of_sum(int number){
    int sum = (1+number) * number / 2;

    printf("square of sum = %d\n", sum * sum);
    return sum * sum;
}

int main(){
    int x = sum_of_squares(100);
    int y = square_of_sum(100);
    int result = y - x;
    printf("result = %d\n",result);
    return 0;
}