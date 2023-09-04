#include <stdio.h>
#include <stdlib.h>
int number;
int main()
{
    printf("enter the number:");
    scanf("%i",&number);
    int x=number;
    int j,revers;
    while(x)
    {
        j=x%10;
        revers=(revers*10)+j;
        x/=10;
    }
    if(revers==number)
    {
        printf("%i is a plindrome number\n",number);
    }
    else
    {
        printf("%i is a plindrome number\n",number);
    }
    return 0;
}
