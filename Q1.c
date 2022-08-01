//Write a function to calculate the area of a circle. (TSRS)
#include"stdio.h"
float area_cal(float);
int main()
{
    float x;
    printf("Enter the radius of circle : ");
    scanf("%f",&x);
 float bag=area_cal(x);
 printf("Area of circle is %f ",bag);
 return 0;
}
float area_cal(float r)
{
    return (3.14*r*r);
}