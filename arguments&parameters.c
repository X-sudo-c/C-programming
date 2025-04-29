#include <stdio.h>
#include <stdbool.h>


void func(char name [], int age){    //so over here we specified the dat type we want in here 

    printf("\nHappy Birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
    
}

// so when calling a function uoi need a matching set of parameters to be able to invoke the parameters



int main(){
    char name [21] = "x-x";
    int age = 21;


    func(name, age );


    return 0;
}