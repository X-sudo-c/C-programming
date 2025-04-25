#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>



int main(){

    double temp; 
    char binary;
    bool sunny = false;


    printf("What is the temperature: \n");
    scanf("%lf", &temp);


    printf("Is it sunny 'Y' or 'N': \n");
    scanf(" %c", &binary);



    binary = toupper(binary);





    if(binary == 'Y'){
        sunny = true;
    }
    else{
        sunny = false;
    }




    if(temp >= 0 && temp < 30 && sunny == true ){
        printf("%.1lf Degrees is okay if you asked me! ", temp);

    }
    else{
        printf("Damn %.1lf Degrees that should be hot ash", temp);
    }









    return 0;
}