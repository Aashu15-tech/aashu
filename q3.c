#include<stdio.h>
int main ()
{
    int s1,s2,sum,pro;
    printf ("print the first sum\n");
    scanf ("%d", &s1);
    printf ("print the second sum\n");
    scanf ("%d", &s2);
    sum=s1+s2;
    pro=s1*s2;
    printf("the sum is:%d\n",sum);
    printf("the product is:%d",pro);
    return 0;
    }