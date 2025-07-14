// Count Frequecy of Four


#include<stdio.h>


int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 0)
    {
        return -1;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo/10;
    

    }
    return iCnt;

    

    
}

int main()
{
    int iValue = 0;
    int  bRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CountFour(iValue);

    printf("Frequency of 4 in Given Number is %d\n",bRet);



    return 0;
}