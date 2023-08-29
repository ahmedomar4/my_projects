#include <stdio.h>
#include <stdlib.h>
int SetBit(int i,int j);
int ClearBit(int n,int k);
int ToggleBit(int a, int b);
int main()
{
    int x=4;//0100
    int y=2;//0010
    int z=0;
    z=x&y;//0000=0
    printf("%i\n",z);
    z=x|y;//0110=6
    printf("%i\n",z);
    z=x^y;//0110=6
    printf("%i\n",z);
    z=x<<1; //shift left mult *2 =8
    printf("%i\n",z);
    z=x>>2; //shift right  diviv/2 twoce =1
    printf("%i\n",z);
    z=~x;//1011=-5 because singed number
    printf("%i\n",z);
    printf("%i\n",SetBit(x,1));
    printf("%i\n",SetBit(x,4));
    printf("%i\n",ClearBit(x,3));
    printf("%i\n",ToggleBit(x,1));


    return 0;
}
int SetBit(int i,int j)
{
    return (i|(1<<(j-1)));
}
int ClearBit(int n,int k)
{
    return (n & (~(1 << (k - 1))));
}
int ToggleBit(int a, int b)
{
    return (a^(1<<(b-1)));
}
