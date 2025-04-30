#include <stdio.h>



void hello(char name[], int age);

int main(){

    //function prototype 
    //WHAT IS IT?
    // Ensures that calls to the functio are made with the correct argumensts 
    char  name[] = "john";
    int age = 45;

    hello(name, age);

    return 0;


}

void hello(char name[], int age ){


    //so from what i have learnt about the function prototype is that it basically you have to move to the next line or basically 
    // the function has to be after the main() function and also you have to call the function before you you write the main function

    printf("Hello %s\n",name);
    printf("You are %d Years old\n",age);
}