#include <stdio.h>
#include <stdlib.h>
int number;
char *ptr=NULL;
int main()
{
    printf("enter the number:");
    scanf("%i",&number);
    ptr=(char *)malloc(32*sizeof(char));
    for(int i=0;i<32;i++)
    {

        if(number%2==0)
        {
            *(ptr+i)='0';
        }
        else
        {
           *(ptr+i)='1' ;
        }
        number/=2;

    }
    *(ptr+32)='\0';


    for(int i=31;i>=0;i--)
    {
        printf("%c",*(ptr+i));
    }

    return 0;
}
