#include <stdio.h>
#include <stdlib.h>
unsigned int day;
int main()
{
    printf("Input week number(1-7):");
    scanf("%i",&day);
    switch(day)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("sunday\n");
        break;
    case 3:
        printf("monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
     case 7:
        printf("friday\n");
        break;
     default:
        printf("please enter number between 1 &7 \n");
    }

    return 0;
}
