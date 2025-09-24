#include<stdio.h>
int main()
{
    int Maths ,Sci,Eng,Sst,Hindi, Total, Percentage ;
   printf("Enter Marks of Subjects");
   scanf("%d%d%d%d%d", &Maths,&Sci, &Eng, &Sst, &Hindi );
   
   Total= Maths+Sci+Eng+Sst+Hindi;
   Percentage= Total/5;

printf("\nToatal marks of all subject=%d ", Total);
printf("\nAvg./ Percentage of all subject=%d ", Percentage);

 }
