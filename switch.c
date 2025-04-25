#include <stdio.h>



int main(){
    printf("Enter a letter statement: ");

    char grade ;

    scanf("%c", &grade);



    switch(grade){
        case 'A':
        printf("Exellent");
        break;

        case 'B':
        printf("Good");
        break;

        case 'C':
        printf("Ayt");
        break;

        case 'D':
        printf("Hmmm");
        break;


        case 'E':
        printf("lol");
        break;


        case 'F':
        printf("Damnn");
        break;

        default:
        printf("We all know theres no other grade apart from A - F ");


        


    }




    return 0;



}