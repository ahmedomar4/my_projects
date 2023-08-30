#include <stdio.h>
#include <stdlib.h>
int number;
int main()
{
    printf("enter the number :");
    scanf("%i",&number);
    int sum=0;
    printf("The positive divisor  : ");
    for(int i=1;i<number;i++)
    {
        if(number%i==0)
        {
            printf("%i\t",i);
            sum+=i;
        }
    }
    printf("\n");
    printf("The sum of the divisor is : %i\n",sum);
    if(sum==number)
    {
        printf("So, the number is  perfect.");
    }
    else
    {
        printf("So, the number is not perfect.");
    }

    return 0;
}
