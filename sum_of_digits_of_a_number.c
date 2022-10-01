// calculate the sum of the digits of the number
#include <stdio.h>
#include <math.h>

int numdigits(int number);
int sum(int num);

int main(){
    int number;
    int sum_of_digits;
    printf("enter the number : ");
    scanf("%d", &number);
    printf("\n");
    sum_of_digits = sum(number);
    printf("sum of digits : %d", sum_of_digits);
    return 0;
}

int numdigits(int number){
    int number_of_digits;
    int count = 1;
    float start = 10;
    while (((float)number/start)>=1){
        count = count + 1;
        start*=10;
    }
    return count;
}

int sum(int num){
    int changer = num;
    int start = 0;
    int base = 10;
    int answer = 0;
    int num_of_digits = numdigits(num);
    while (start < num_of_digits){
        int digit = changer%base;
        changer = (changer - digit)/10;
        answer = answer + digit;
        start = start + 1;
    }
    return answer;
}
