/*input = 2095
output =
5
9
0
2
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 0)
    {
        return;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n",iDigit);

        iNo = iNo / 10;

    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);


    return 0;
}