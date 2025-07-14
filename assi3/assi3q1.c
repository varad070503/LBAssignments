//Print Even numbers of the accepted number
#include<stdio.h>

void PrintEven(int iNo)
{
    int iCount = 0;
    int iNum = 2;
    if(iNo <= 0)
    {
        return;
    }
    
    while(iCount < iNo)
    {
        printf("%d ",iNum);
        iNum += 2;
        iCount++;
    }

    
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}