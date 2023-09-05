#include <stdio.h>
#include <stdlib.h>
int number1,number2,x;
int main()
{
    printf("enter two number::");
    scanf("%i %i",&number1,&number2);
    if(number1<=number2)
    {
        for(int i=1;i<=number1;i++)
        {
            if((number1%i==0)&&(number2%i==0))
            {
                x=i;
            }
            else{}
        }
    }
    else
    {
        for(int i=1;i<=number2;i++)
        {
            if((number1%i==0)&&(number2%i==0))
            {
                x=i;
            }
            else{}
        }
    }
    printf("HCL FOR %i AND %i IS %i\n",number1,number2,x);

    return 0;
}
