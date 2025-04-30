#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main(){


    int number = 0 ;
    int sum = 0 ;


    do{
        printf("Enter a # that above 0: \n");
        scanf("%d", &number);
        if (number > 0){
            sum += number;
        }


    }while(number > 0);
    
    return 0;

}

