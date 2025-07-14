//check even or odd
#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);


    if(bRet == 1)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is odd");
    }
}