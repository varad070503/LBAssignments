/*5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
   /* for(iCnt = 2;iCnt <= iNo + iNo;iCnt++)
    {   
        if(iCnt % 2 == 0)
        {
        printf("%d\t",iCnt);
        }
    }

    */
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

