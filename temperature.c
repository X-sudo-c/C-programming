#include <stdio.h>
#include <ctype.h>




int main(){

    char unit;
    float temp;

    


    printf("\n Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

 
    if ( unit == 'C'){
        printf("The temperature is currently in Celcius\n");
        printf("ENter the temp in Celcius\n");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
        printf("\n The temperatur in Farenheit %.1f", temp);


    }
    else if (unit == 'F'){
        printf("The temperature is currently in F");
        printf("Enter the temp in Celcius");
        scanf("%f", &temp);

        temp = ((temp - 32 ) *5)/9 ;

        

    }
    else{
        printf("This is not a valid unit of measurement %c", unit);

    }



}