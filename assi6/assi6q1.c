//input : <=50 ---small
//input : <=100 ---Medium
//input : >100 ---Large
#include<stdio.h>
void PrintSize(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid Number \n");
        return;
    }

    if(iNo <= 50)
    {
        printf("small");
    }
    else if(iNo > 50 && iNo <= 100 )
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    PrintSize(iValue);
}