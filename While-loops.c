#include <stdio.h>
#include <string.h>


int main(){
    char name [25];

    printf("WHat is your name: \n");
    fgets(name, 25, stdin);

    name[strlen(name) - 1] = '\0';

    while(strlen(name)==0)
    {
        printf("You did not enter your name\n");
        printf("What is your name\n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1]='\0';
    }

    printf("Hey %s", name);

    return 0;
}