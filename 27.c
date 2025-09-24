#include<stdio.h>
int main()
{
    int hours, charge;
    printf("\nEnter no. of hours");
    scanf("%d", &hours);
    
    if(hours==1) charge=20;
    
    else if(hours==2) charge=30;
    
    else if(hours==5) charge=70;
    
    else charge=0;
    
    printf("\nCharge= %d", charge);
    
}
