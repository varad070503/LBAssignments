//convert kilometers to meters

#include<stdio.h>

int FhtoCs(float fTemp)
{
    float Ce = 0.0f;

    if(fTemp <= 0)
    {
        return -1;
    }

    Ce = (fTemp - 32) * (5.0/9.0);

    return Ce;



}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %f\n",dRet);

    return 0;
}