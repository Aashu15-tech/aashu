#include<stdio.h>

int main(){
    char C , s ;
    printf("enter capital letter ");
    scanf("%s", &C);

    s=C+32;
    printf("small letter of given capital letter is %c", s);

    return 0;
}