#include <stdio.h>
#include <stdlib.h>
int number;
int main()
{
    int n,i,j=1,sum=0;
    printf("enter the number:");
    scanf("%i",&number);
    n=number;
    while(n)
    {
        i=n%10;
        /*factoral*/
        while(i)
        {
            j*=i;
            i--;
        }
        //-----------------
        sum+=j;
        n/=10;
        j=1;
    }
    printf("sum=%i\n",sum);
    if(sum==number)
    {
        printf("%i is a strong number\n",number);
    }
    else
    {
       printf("%i isnot a strong number\n",number);
    }

    return 0;
}
