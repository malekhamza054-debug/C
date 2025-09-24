#include <stdio.h>
int main()
{
    int a, b;
    
    printf("Enter the value of a&b ");
    scanf("%d%d", &a, &b);
    
    if(a < b)
        printf("a is less");
    else
        printf("b is less");

}
