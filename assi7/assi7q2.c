//Convert from dollor to INR -Consider 1$ as 70 rupees
#include<stdio.h>

int DollorToINR(int iNo)
{
    if(iNo <= 0)
    {
        return -1;
    }
    int INR = 0;

    INR = iNo * 70;

    return INR;


}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number in USD : ");
    scanf("%d",&iValue);

    iRet = DollorToINR(iValue);

    if(iRet == -1)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Value in INR is %d",iRet);
    }



    return 0;
}