#include <stdio.h>
#include <stdlib.h>
unsigned number ,size;
int main()
{
    int fact=1;
    float sum=0;
    printf("enter the size:");
    scanf("%i",&size);
    printf("enter number:");
    scanf("%i",&number);
    int x=number;
    for(int i=0;i<size;i++)
    {
        int counter=i*2;
        /*factotial*/
        while(counter>0)
        {
            fact*=counter;
            counter--;
        }
        counter=(2*i-1);
        /*power*/
         while(counter>0)
        {
            x*=number;
            counter--;
        }

        /*frist place is alawys eqel 1*/
        if(i==0)
        {
            sum=1;
        }
        /*the even place is alawys postive */
        else if(i%2==0)
        {
            sum+=(float)x/fact;
        }
        /*the even place is alawys nagitive */
        else
        {
           sum-=(float)x/fact;
        }
        fact=1;
        x=number;

    }
    printf("sum= %f\n",sum);

    return 0;
}
