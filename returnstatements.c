#include <stdio.h>


double func(double x){

    double result = x * x;
    return result;

    //instead of doing this long ass thing we can just do return x * x 

}


int main(){

    double x = func(3);
    printf("%.1lf", x);

    return 0;

}