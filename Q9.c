/*Write a function to check whether a given number contains a given digit or not. 
(TSRS)
*/
#include"stdio.h"
int digitfind(int,int);
int main()
{
    int n,d;
    printf("Enter any Number :");
    scanf("%d",&n);
    printf("Enter a digit :");
    scanf("%d",&d);
    int x=digitfind(n,d);
    if(x==1)
    {
    printf("%d is present in %d",d,n);

    }
    else
    printf("%d is not present in %d",d,n);

    return 0;
}
int digitfind(int num,int digit)
{
    
     while(num!=0)
     {
        int r=num%10;
        if(r==digit)
       return 1;
      num=num/10;
     }
      return 0;
     }

