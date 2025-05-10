#include <stdio.h>
#define ARRAY_LEN(x) (sizeof(x)/ sizeof((x)[0]))
//basically practicing  arrays in C for the first time with a touch of functions

int func(){ //defining a function that basically does the same thing as the the same thing it has an array of numbers and im just getting jiggy widit
    int array[] = {55 , 29, 230, 23,4 , 5, 89, 19};

    for (int i = 0 ; i < 9; i++){
        printf("\n this is %i", array[i]);
    }

    return 0;
}

int main(){
    //array = a data structute that can store many values of the same data type 

    double prices[5] ;

    prices[0]= 5.0; //defining the index in which 0 is at 
    
    prices[1] = 10.0; //defining the index of 1 the second value in the array with the value of 10

    prices[2] = 15.0; //same here 

    prices[3] = 5.0; // same here 

    prices[4] = 20; // same here  

    
    for(int i = 0 ; i < 5 ; i++){  // a loop for  i and if 
        printf("the index %d of  prices is  %lf \n", i, prices[i] );  // same here 
    }

    func(); //calling the function that i defined earlier


    return 0; // returning the value of 0 becouse 
}