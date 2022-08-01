//Write a function to calculate the factorial of a number. (TSRS)
#include"stdio.h"
int fact(int );
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int bag=fact(n);
    printf("Factorial of %d is %d",n,bag);
    return 0;
}
int fact(int num)
{
    for(int i=1;i<=num;i++)
    {
     int x=1;
     for(int i=1;i<=num;i++)
     {
        x=x*i;
     }
     return x;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    }
}