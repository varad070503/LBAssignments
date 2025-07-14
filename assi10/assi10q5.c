/*5.Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int EvenSum = 0;
    int OddSum = 0;
    int Diff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            EvenSum += iDigit;
        }
        else
        {
            OddSum += iDigit;
        }
        iNo = iNo / 10;
    }
    Diff = EvenSum - OddSum;

    return Diff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference is %d",iRet);

    



    return 0;
}