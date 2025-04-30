#include <stdio.h>
#include <string.h>


int main(){

    char string1[] = "Bro";
    char string2[] = "Code";


    //strlwr(string1); //strlwr is like the python function name.lower() strlwr

    //strupr(string1); //strupr works like the python function name.upper()  strupr

    //strcat(string1, string2); //strcat basically concatenates  the 2 functions together

    //strcpy(string1, string2); //Copies the values of String 1 to String 2

    //strncpy(string1, string2, 3);

    //strrev(string1); ///reverses the string 

    int results = strlen(string1);



    printf("%s",string1); 

    printf("\n%d", results);



}