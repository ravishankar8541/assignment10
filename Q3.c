//Write a function to check whether a given number is even or odd. Return 1 if the 
//number is even, otherwise return 0. (TSRS)
#include"stdio.h"
int cal_even_odd(int);
int main()
{
    int bag=cal_even_odd(2);
    if(bag==1)
    printf("even");
    else
    printf("odd");
    return 0;
}
int cal_even_odd(int x){

 if(x%2==0) 
 return 1;
 else return 0;
}