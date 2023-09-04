#include <stdio.h>
#include <stdlib.h>
int number;
int main()
{
    printf("enter the number:");
    scanf("%i",&number);
    int x=number;
    int i,j,sum=0;
    while(x)//x>0
    {
        i=x%10;
        j=i*i*i;
        sum+=j;
        x/=10;
    }
    if(sum==number)
    {
        printf("%i is an Armstrong Number\n",number);
    }
    else
    {
       printf("%i isnot an Armstrong Number\n",number);
    }

    return 0;
}
