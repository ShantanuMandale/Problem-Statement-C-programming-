///////////////////////////////////////////////////////////////////////
// Accept one number from user and print that number of * on screen
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Accept(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int ivalue= 0;
     
     printf("Enter the number: \n");
     scanf("%d",&ivalue);

     Accept(ivalue);


}