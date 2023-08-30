#include <stdio.h>
#include <stdlib.h>
unsigned n;
int main()
{
    printf("enter the number:");
    scanf("%i",&n);
    for(int counter1=1;counter1<=n;counter1++)
    {
        for(int counter2=1;counter2<=n;counter2++)
        {
            printf("%i * %i= %i\t",counter2,counter1,(counter1*counter2));
        }
        printf("\n");
    }
    return 0;
}
