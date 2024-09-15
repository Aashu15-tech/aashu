#include<stdio.h>
int main() {
    int perimeter,l,w,area;
    printf("the length is\n");
    scanf("%d", &l);
    printf("the width is\n");
    scanf("%d", &w);
    perimeter = (l+w)*2;
    printf("the perimeter is:%d\n",perimeter);
    area = l*w;
    printf("the area is:%d",area);
    return 0;
}