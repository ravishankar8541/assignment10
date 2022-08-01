/*Write a function to calculate the number of combinations one can make from n items 
and r selected at a time. (TSRS)*/
#include"stdio.h"
int comb(int,int);
int main()

{
    int x=comb(5,2);
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


int comb(int n,int r)
{
    return (fact(n))/(fact(r)*fact(n-r));
}