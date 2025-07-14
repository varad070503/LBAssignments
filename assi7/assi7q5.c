//diff betn even & odd factorial
#include<stdio.h>


int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = 2;iCnt <= iNo;iCnt += 2)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }

    }
    for(iCnt = 1;iCnt <= iNo;iCnt += 2)
    {
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt;
        }

    }

    iDiff = iEvenFact-iOddFact;

    return iDiff;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between even & Odd factorial of number is %d",iRet);

    return 0;
}