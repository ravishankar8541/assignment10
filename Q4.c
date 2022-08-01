//Write a function to print first N natural numbers (TSRN)
#include"stdio.h"
void printNatural(int);
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    printNatural(n);
    return 0;
}
void printNatural(int num)
{
    for(int i=1;i<=num;i++){
        printf("%d ",i);
    }
}