//input : 4
//Output : 4    8   12  16  20  first five multiples

#include<stdio.h>

void MultiplyDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
        printf("%d\t",iNo * iCnt); 
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    MultiplyDisplay(iValue);

    return 0;

}