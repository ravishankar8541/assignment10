/*Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include"stdio.h"
void primeFact(int);
int main()
{
    int n=36;
    primeFact(n);
    return 0;
}
void primeFact(int n)
{
    for(int i=2;n!=1;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d,",i);
        }
    }
}