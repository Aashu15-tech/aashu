#include<stdio.h>

int main(){
    int a,b,c;

    a=23;
    b=34;

    c=b;

    b=a;

    a=c; 

    printf("a is %d \n",a );
    printf("b is %d",b );


    return 0;
}