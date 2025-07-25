/*2.Write a program which accept number from user and return the count of odd
digits.
Input : 2395
Output : 3
*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int OddCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            OddCount++;
        }
        iNo = iNo/10;
        
    }

    return OddCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Count of Odd numbers is %d",iRet);

    



    return 0;
}