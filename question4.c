//////////////////////////////////////////////////////////////////////////////
// Accept one number from user and check whether is it divisible by 5 or not
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool bRet = 0;
    printf("Enter the number :\n");
    scanf("%d",&ivalue);
  
    bRet = Check(ivalue);

    if(bRet == true)
    {
        printf("the number is divisible by 5");
    }
    else
    {
        printf("the number is not Divisible by 5");
    }
 }

