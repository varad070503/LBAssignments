#include<stdio.h>
//#include<math.h>

double CircleArea(float fRadius)
{
    float Area = 0;
    float PI = 3.14;//M_PI;

    if(fRadius <= 0)
    {
        return -1;
    }

    Area = PI * fRadius * fRadius;
    return Area;
    
    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %f",dRet);


    return 0;
}