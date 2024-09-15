#include<stdio.h>

int main(){
    int n, sum;
    printf("enter 3 digit no ");
    scanf("%d", &n);
    
    int first , last;
    first=n/100;
    printf("first digit is %d \n", first);

    last=n%10;
    printf("last digit is %d\n", last);

    sum = last +first;
    printf("sum of first digit and last digit is %d ", sum);
    return 0;
}