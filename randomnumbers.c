#include <stdio.h> //for input and output functions like printf and scanf 
#include <string.h>
#include <time.h> // for getting the current time using time(0)
#include <stdlib.h> // this is for general utilityb functions like  rand() and srand()



int main(){

    //psuedo random numbers = A set of values or elements that are statistically random

    srand(time(0)); //this i seed the random number function to ensure that we get different results 

    int number1 = (rand() % 6) + 1;  //simulates a dice roll 
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);



    return 0;
}