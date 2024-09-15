#include<stdio.h>

int main(){
    char C , s ;
    printf("enter small letter ");
    scanf("%s", &s);

    C=s-32;
    printf(" capital letter of given small letter is %c", C);

    return 0;
}