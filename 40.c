#include <stdio.h>
int main() {
    int num;
    
    printf("Enter value of num ");
    scanf("%d", &num);
    
    if(num > 0)
        printf("\nPositive");
    else if(num < 0)
        printf("\nNegative");
    else
        printf("\nZero");
        
}
