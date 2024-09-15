#include<stdio.h>
int main() {
    float r,pi=3.1415,area,perimeter;
    printf("the radius of the circle is\n");
    scanf("%f", &r);
    area = pi*r*r;
    printf("the area of the circle is=%f\n",area);
    perimeter = 2*pi*r;
    printf("the perimeter of the circle is=%f",perimeter);
    return 0;
}