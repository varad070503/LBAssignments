//convert from upper to lower and lower to uppers
#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Lowecase : %c",cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Uppercase : %c",cValue - 32);
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    DisplayConvert(cValue);
    return 0;
}