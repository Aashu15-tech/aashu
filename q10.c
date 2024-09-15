#include<stdio.h>

int main(){
    int no , f,l;
    printf("enter 2 digit no. ");
    scanf("%d", &no);

    f=no/10;
    l=no%10;

    printf("reverse no. of given is %d", l*10+f);
    return 0;
}