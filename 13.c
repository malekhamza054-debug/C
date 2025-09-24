#include<stdio.h>
int main()
{
    float area, circum, r, Pi=3.14;
    printf("\n Enter the value of r ");
    scanf("%f", &r);
    area= Pi*r*r;
    circum= 2*Pi*r;
    printf("\n Area of Circle= %f", area);
    printf("\n Circumference of Circle= %f", circum);
    
}
