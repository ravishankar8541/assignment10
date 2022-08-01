/*
Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)
*/
#include"stdio.h"
int arrang(int,int);
int main()

{
   int x=arrang(9,5);
    printf("%d ",x);
    return 0;
}
int fact(int num)
{
   
     int x=1;
     for(int i=1;i<=num;i++)
     {
        x=x*i;
     }
     return x;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    }
int arrang(int n,int r)
{
    int p=fact(n)/fact(n-r);
    return p;
}