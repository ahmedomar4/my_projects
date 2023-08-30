#include <stdio.h>
#include <stdlib.h>
int number ,size;
int main()
{
    printf("enter the number:");
    scanf("%i",&number);
    printf("enter the number:");
    scanf("%i",&size);
    int x=number;
    int sum=0;
    for(int counter=0;counter<size;counter++)
    {
        int i=(2*counter);
        while(i>0)
        {
            x*=number;
            i--;
        }
        if(counter%2!=0)
        {
            x*=(-1);
        }
        else{/*nothing*/}
        printf("%i\n",x);
        sum+=x;
        x=number;

    }
    printf("sum=%i",sum);
    return 0;
}
