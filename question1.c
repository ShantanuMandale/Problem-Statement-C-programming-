//////////////////////////////////////////////////
// program to divide two number
///////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
   int iAns = 0;

   if(iNo2 < 0)
   {
    return -1;
   }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
int ivalue1 = 15;
int ivalue2 = 5;
int iRet = 0;

iRet = Divide(ivalue1, ivalue2);

printf("the Division is : %d",iRet);

return 0;

}