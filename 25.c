#include <stdio.h>
int main() 
{
    int age, weight;
    printf("Enter your age and weight");
    scanf("%d%d", &age, &weight);
    
    if(age>=18&&age<=50&&weight>50){
        printf("Eligible for Blood Donation");
    }
    else
    {
        printf("Not Eligible for Blood Donation");
    }
  }
