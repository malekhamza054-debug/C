#include <stdio.h>
int main()
{
    float salary, da, hra, pf, gross;
    
    printf("Enter basic salary, DA, HRA, PF:");
    scanf("%f%f%f%f", &salary, &da, &hra, &pf);
    
    gross = salary + da + hra - pf;
    
    printf("Gross Salary = %.2f\n", gross);

}
