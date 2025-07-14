//print the table of given number
#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = 10;iCnt > 0;iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}