#include <stdio.h>


int main(){

    int age;

    printf("\n Enter your age: ");
    scanf("%d", &age);


    if(age >= 18){
        printf("You are now signed up");
    }
    else if(age < 0){
        printf("how are you this %d age man! you havent been born yet", age);

    }
    else{
        printf("you are too young to sign up");}

    return 0;

}