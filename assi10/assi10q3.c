/*3.Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
*/

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo/10;
        
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count of Digits between 3 and 7  is %d",iRet);

    



    return 0;
}