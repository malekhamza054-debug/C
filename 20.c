#include <stdio.h>
int main() 
{
    int rollno;
    char name;
    
    printf("Enter roll no:");
    scanf("%d", &rollno);
    
    printf("Enter student initial letter:");
    scanf(" %c", &name);
    
    printf("\nRollno: %d", rollno);
    printf("\nInitial: %c", name);
}
