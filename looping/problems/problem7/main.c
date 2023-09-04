#include <stdio.h>
#include <stdlib.h>
unsigned int NumberOne,NumberTwo;
int main()
{
    printf("enter two numbers::");
    scanf("%i%i",&NumberOne,&NumberTwo);

  for(int i=NumberOne;i<NumberTwo;i++)
  {
      int sum=0;
      for(int j=NumberOne;j<i;j++)
      {
          if(i%j==0)
          {
              sum+=j;
          }
          else{/*nothing*/}
      }
      if(sum==i)
      {
          printf("%i\t",sum);
      }
      else{/*noting*/}
  }



    return 0;
}
