// Count Less than six


#include<stdio.h>


int CntLessThenSix(int iNo)
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
        if(iDigit < 6)
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

    bRet = CntLessThenSix(iValue);

    printf("Frequency of Numbers which are less than 6 is %d\n",bRet);



    return 0;
}