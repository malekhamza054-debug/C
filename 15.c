#include<stdio.h>
int main()
{
    int Si ,P ,R, T;
    printf("\n Enter the value of P");
    scanf("%d", &P);
    printf("\n Enter the value of R");
    scanf("%d", &R);
    printf("\n Enter the value of T");
    scanf("%d", &T);
    Si=P*R*T/100;

    printf("Si=%d", Si);
   
}
