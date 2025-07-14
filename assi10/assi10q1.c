/*1.Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1
*/

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int EvenCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            EvenCount++;
        }
        iNo = iNo/10;
        
    }

    return EvenCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Count of even numbers is %d",iRet);

    



    return 0;
}