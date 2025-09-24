#include <stdio.h>

int main() 
{
   int num;
   printf("Enter the value of num:");
   scanf("%d", &num);
   if(num%4==0 || num%6==0){
       printf("\nNumber is divisible by 4 and 6");
       }
       else{
           printf("\nNumber is not divisible by 4 and 6");
       }

 
}
