#include <stdio.h>
#include <stdbool.h>
#include <strings.h>




int main(){

    int age;
    char name[25]; //25 bytes  if we go over this limit this would cause a buffer overflow


    printf("What is your name? ");
    //scanf("%s", name); // we use %s when we are dealing with character arrays and also n0 white spaces if there are white spaceswe have to use a different function called fget()

    fgets(name, 25, stdin);
    printf("Hello %s how are you?", name);  


    printf("\nHow old are you? ");
    scanf("%d", &age);



    printf("you are %d years old", age); 
}