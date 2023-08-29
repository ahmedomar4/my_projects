#include <stdio.h>
#include <stdlib.h>
char opertor;
int number1,number2;
int main()
{
    printf("enter opertor ::");
    scanf("%c",&opertor);
    printf("enter two number :: ");
    scanf("%i %i",&number1,&number2);
    switch(opertor)
    {
    case '+':
        printf("%i+%i=%i\n",number1,number2,(number1+number2));
        break;
    case '-':
        printf("%i-%i=%i\n",number1,number2,(number1-number2));
        break;
     case '*':
        printf("%i*%i=%i\n",number1,number2,(number1*number2));
        break;
     case '/':
        printf("%i/%i=%i\n",number1,number2,(number1/number2));
        break;
     default:
        printf("error!!enter + or *or -or /");
    }

    return 0;
}
