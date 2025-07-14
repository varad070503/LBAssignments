/* check if input number has zero or not
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL CheckZero(int iNo)
{
    int iDigit = 0;

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
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo/10;
        

    }
    return FALSE;

    

    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }


    return 0;
}