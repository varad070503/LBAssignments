/* Count Frequecy of two
*/

#include<stdio.h>


int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    bRet = CountTwo(iValue);

    printf("Frequency of 2 in Given Number is %d\n",bRet);



    return 0;
}