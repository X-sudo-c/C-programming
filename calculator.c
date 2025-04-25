#include <stdio.h>
#include <math.h>





int main(){
    char operator;
    double num1;
    double num2; 
    double results;


    printf("\n Enter an operator(+ - * /)");
    scanf("%c", &operator);

    printf("\n Enter first Number: ");
    scanf("\n %lf", &num1);


    printf("\n Enter Second number: ");
    scanf("\n %lf",  &num2 );



    switch(operator){
        default:
        printf("Chale ehy didnt you see the operators %c", operator);
        break;

        case '+':
        results = num1 + num2;
        printf("%.2lf", results);
        break;


        case '-':
        results = num1 - num2;
        printf("%.2lf", results);
        break;

        case '*':
        results = num1 * num2;
        printf("%.2lf", results);
        break;

        case '/':
        results = num1 - num2;
        printf("%.2lf", results);



    }




 
    return 0;
}