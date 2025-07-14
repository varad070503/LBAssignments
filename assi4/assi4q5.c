//write a program which accepts number from user and return difference between summation of all its factors and non factors

#include<stdio.h>
#include<stdlib.h>

int DiffSummationFNF(int iNo)
{
    int i = 0;
    int iFact = 0;
    int iNonFact = 0;
    int iDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1;i < iNo;i++)
    {
        if(iNo % i == 0)
        {
            iFact += i; 
        }
        else 
        {
            iNonFact += i;
        }

        

    }
    printf("Summation of Factors is : %d\n",iFact);
    printf("Summation of Non Factors is : %d\n",iNonFact);
    iDiff = abs(iFact - iNonFact);   //abs function returns always positive

    return iDiff;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = DiffSummationFNF(iValue);

    printf("Difference Between Summation of Factors and Non Factors is %d\n",iRet);
    return 0;
}