#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int number=10;
    int *ptr=&number;
    /*
    canot over write this varible because const
    but can change the value by use pointer
    */
    printf("number=%i\n",number);
    printf("number=%i\n",*ptr);
    *ptr=15;
    printf("number=%i\n",number);
    printf("number=%i\n",*ptr);



    return 0;
}
