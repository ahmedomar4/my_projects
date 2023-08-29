#include <stdio.h>
#include <stdlib.h>

int main()
{
   char x=200;
   unsigned char y=200;
   printf("%c\n%c\n",x,y);
   printf("%i\n%i\n",x,y);
   if(x==y)
   {
       printf("noproblem\n");
   }
   else
   {
       printf("error!!\n");
   }
   /*output error!! compera between intger not charcater */
    return 0;
}
