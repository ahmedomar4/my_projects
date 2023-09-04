#include <stdio.h>
#include <stdlib.h>
int arr[10],elements;
int main()
{
    printf("enter number of elements:");
    scanf("%i",&elements);
    for(int i=0;i<elements;i++)
    {
        int number;
        scanf("%i",&number);
        arr[i]=number;
    }
    for(int i=elements-1;i>=0;i--)
    {
        printf("%i ",arr[i]);
    }
    return 0;
}
