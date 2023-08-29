#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\a\a\a\a\a");
    printf("Ahmed \b\b\b\b\b\b Omar\n");//Six(\b) because \0
    printf("Ahmed\tOmar\n");
    printf("Ahmed\v");
    printf("Omar\n");
    printf("Mohamed Omar \r Ahmed \n");
    printf("Ahmed\\omar\n");
    printf("\"Ahmed Omar\"\n");
    printf("\'Ahmed Omar\'\n");
    printf("\?\?!\n");
    char name1[4]="A\045\076";//(045) is octal number it is converted to decimal notation which is the ASCII value of char
    printf("%s\n",name1);
    char name2[3]="B\x4a";
    printf("%s\n",name2);
    return 0;
}
