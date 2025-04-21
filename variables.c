#include <stdio.h>
#include <stdbool.h> //to use boolean use include <stdbool.h>

int main(){


    int age = 21;
    int x; //int
    int y; //int
    char grade; // char stores a single character
    float gpa = 2.05;    // this is a float variable   floats use 4 bytes of memory (32 bits of precision)  6 - 7 digits %f
    double d = 3.14159265; // doubles uses 8bytes of data with (64 bits of precision) 15 -16 digits %lf  can stor 15 - 16 digits


 
    bool e = true;   // 1byte   1 = True & 0 = false 



    printf("%d \n", e); //to use a boolean we use "%d".  1 = True & 0 = false 





    x = 5;
    y = 10;

    grade = 'C'; // single character with single quotes


    // C programming isn't an object-oriented programming language, so it doesn't have classes and objects. Strings are technically objects in C++ and Java.
    // In C, strings are represented as arrays of characters terminated by a null character '\0'.
 

                 // array of characters

    char name[] = "Bro";

    char name2[]  = "Brody";

    char friend[] = "Friend";


    char f = 120;  //1 byte (-128 to 127) %d or %c   we can display the number as a character or an integer

    unsigned char g = 255; 

    short int h = 32767;  // 2 bytes (-32,768 to +32,767)  %d
    
    unsigned short int i  = 65535; //we use %d ehan printing unsigned short integers 
    


    printf("%c\n", g);

    printf("%c\n\n", f);
 
    printf("%s\n", friend);

    printf("Hello, %s \n", name);

    printf("You are  %d years old\n", age );

    printf(" Your grade is %c\n", grade);

    printf("Your GPA is %f\n", gpa);

    

    return 0;
}