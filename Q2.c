//Write a function to calculate simple interest. (TSRS)
#include"stdio.h"
float sim_interest(float,float,float);
int main()
{
    float p,r,t;
    printf("Enter principal,rate and time :");
    scanf("%f %f %f",&p,&r,&t);
    float bag=sim_interest(p,r,t);
    printf("%f",bag);

}
float sim_interest(float x,float y,float z)
{
    float si =(x*y*z)/100;
    return si;
}