#include <stdio.h>
int main() 
{
    int num;
    
    printf("Enter value of num ");
    scanf("%d", &num);
    if(num%2==0)
        printf("\nEven");
    else
        printf("\nOdd");

}
