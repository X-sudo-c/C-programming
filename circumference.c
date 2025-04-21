#include <stdio.h>
#include <math.h>



int main(){


    const double  PI = 3.14159;

    double  radius;
    double circumference;
    double area;

    


    printf("What the radius of the circle: \n");
    scanf("%lf", &radius);   //the formater for doubles is %lf



    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);


    printf("circumference: %lf \n", circumference);
    printf("Area is: %lf", area);

    return 0;






}