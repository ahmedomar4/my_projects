#include <stdio.h>
#include <stdlib.h>
unsigned int n;
int main()
{
    int sum=0;
    float average;
    printf("enter the number:");
    scanf("%i",&n);
    for(int counter=1;counter<=n;counter++)
    {
        int number;
        printf("Number-%i:",counter);
        scanf("%i",&number);
        sum+=number;
    }
    average=(float)sum/n;
    printf("sum=%i\naverge=%f",sum,average);

    return 0;
}
