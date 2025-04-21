#include <stdio.h>
#include <stdbool.h>

int main(){

    int x =5;
    int y = 2;


    float z = x/(float)y; //when doing division with integers you need to pay attention to the code 

    int mod = x % 2;


    x++;
    y--;


    printf("solution: %.2f \n", z );

    printf("modulus of %i by %i = %i", x, y, mod );



    

    return 0;




}
