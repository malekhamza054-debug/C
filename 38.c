#include <stdio.h>
int main() 
{
    int a, b, c;
    
    printf("Enter the value of a, b& c ");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a >= b && a >= c)
        printf("a is max");
    else if(b >= a && b >= c)
        printf("b is max");
    else
        printf("c is max");
    
}
