#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void can(void);

int main(){
    double a;
    double b;
    double c;

    printf("what is A: \n" );
    scanf("%lf", &a);


    printf("What is B: \n");
    scanf("%lf", &b);


    c = sqrt(pow(a,2)+pow(b,2));


    printf("%lf", c);

    return 0;










}


