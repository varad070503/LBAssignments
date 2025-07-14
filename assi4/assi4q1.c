//Multiply Factors

#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( i = 1; i < iNo ;i++)
    {
        if(iNo % i == 0 )
        {
            iFact *= i;
        }
    
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    
    printf("%d",iRet);




    return 0;
}