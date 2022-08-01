//Write a function to print first N odd natural numbers. (TSRN)
#include"stdio.h"
void oddNatural(int);
int main()
{
int n;
printf("Enter a number :");
scanf("%d",&n);
oddNatural(n);
    return 0;
}
void oddNatural(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(i%2)
        {
        printf("%d ",i);
    }}
}