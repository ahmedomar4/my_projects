#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y;
    x=x++;//x=1
    y=x++;//y=1 ,x=2
    printf("y=%i\tx=%i\n",y,x);
    ++x;//x=3
    y=x + ++x + x++ ;//y=4+4+4=12 ,x=5  --- frist opration ++x x=4
    printf("y=%i\tx=%i\n",y,x);

    return 0;
}
