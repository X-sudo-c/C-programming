#include <stdio.h>
#include <string.h>

void func(){
    int num = 34;
    printf("i am commiting this so that i get a commit for today %d", num);
    
}


//hahahahahahhahahahahahhahahahah

//hahahahhahahahahahahahahahahahahaha

int main(){
    char name [25];
    printf("WHat is your name:\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    
    func();
    

    while (strlen(name)==0)
    {
        /* code */
        printf("You didnt any code");
        printf("WHat is your name:\n");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';


    }
    
    printf("Hey there %s", name);



    return 0;
}
