//reverse factors
#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( i = iNo - 1; iNo > 0 ;i--)
    {
        if(iNo % i == 0 )
        {
            printf("%d ",i);
        }
    
    }
   
}
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}