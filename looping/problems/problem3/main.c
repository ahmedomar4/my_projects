#include <stdio.h>
#include <stdlib.h>
unsigned number,fact=1;
int main()
{
    printf("enter the number:");
    scanf("%i",&number);
    if(0==number||1==number)
    {
        fact=1;
    }
    else
    {
       while(number>=2)
       {
           fact*=number;
           number--;
       }
    }
    printf("factoral = %i\n",fact);


    return 0;
}
