//Even Factorial
#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2;iCnt <= iNo;iCnt += 2)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }

    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}