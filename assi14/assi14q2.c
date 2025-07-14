/*
2. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 5
Output : 
2 4 6 8 10
1 3 5 7 9
2 4 6 8 10
1 3 5 7 9
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
     for(i = 1;i <= iRow;i++)
    {
    if(i % 2 != 0)
        {
            int no = 2;
        for(j = 1;j <= iCol;j++)
        {
            printf("%d\t",no);
            no+=2;
        }
    }
    else
        {
            int no = 1;
          for(j = 1;j <= iCol;j++)
        {
            printf("%d\t",no);
            no+=2;
        }  
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