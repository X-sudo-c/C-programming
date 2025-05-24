#include <stdio.h>
#include <string.h>



int main()
{
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    strcpy(temp, x); //strcpy comes form the string.h package i guess
    strcpy(x, y);
    strcpy(y, temp);



    printf("x = %c\n", x);
    printf("y = %c\n", y);





    return 0;
}