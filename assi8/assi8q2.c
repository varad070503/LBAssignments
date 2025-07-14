//Area of Rectangle
#include<stdio.h>

double RectArea(float fwidth,float fheight)
{
   float Area = 0.0f;

   if(fwidth <= 0 || fheight <= 0)
   {
    return -1;
   }

   Area = fwidth * fheight;

   return Area;
    
}

int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : \n");
    scanf("%f",&fValue1);

    printf("Enter height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is %f",dRet);


    return 0;
}