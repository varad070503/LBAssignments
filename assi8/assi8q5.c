//convert square feet to square meters

#include<stdio.h>

float SquareMeter(float Area)
{
    float SqFe = 0.0f;

    SqFe = Area * 0.0929;

    return SqFe;



}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Area in Square feet : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Area in Square Meter is %f\n",dRet);

    return 0;
}