//convert kilometers to meters

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Meters = 0;

    if(iNo <= 0)
    {
        return -1;
    }

    Meters = iNo * 1000;

    return Meters;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance in KM : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meters is %d\n",iRet);

    return 0;
}