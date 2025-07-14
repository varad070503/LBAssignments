/*
3. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output : 
A A A A A
B B B B B
C C C C C
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    for(i = 0;i < iRow;i++)
    {
        for(j = 0;j < iCol;j++)
        {
            printf("%c\t",'A' + i);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the Number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter the Number of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}