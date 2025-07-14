//input : 9
//output : Nine

#include<stdio.h>
void PrintInWords(int iNo)
{
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 0:
        printf("Zero\n");
        break;

        case 1:
        printf("One\n");
        break;

        case 2:
        printf("Two\n");
        break;

        case 3:
        printf("Three\n");
        break;

        case 4:
        printf("Four\n");
        break;

        case 5:
        printf("Five\n");
        break;

        case 6:
        printf("Six\n");
        break;

        case 7:
        printf("Seven\n");
        break;

        case 8:
        printf("Eight\n");
        break;

        case 9:
        printf("Nine\n");
        break;

        default:
        printf("Invalid Input \n");
    }

    
}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    PrintInWords(iValue);
}