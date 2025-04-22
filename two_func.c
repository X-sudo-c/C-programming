#include <stdio.h>
void butler(void); /*ISO/ANSI C function prototyping */
void butlers(void);
void butlersss(void);
void fourth(void);

int main(){
    printf("I will summon the butler function.\n");
    butler(); //this is calling the function void butler
    printf("Yes. Bring me some tea and writeable CD-ROMs.\n");


    printf("Calling the second function");
    butlers(); // this is calling the second function


    printf("Calling the third function");
    butlersss();


    printf("Calling the fourth function...");
    fourth();



    return 0;
}

void butler(void) // This is the function that we are calling 
{
    printf("you rang , sir?\n");
}


void butlers(void){ //creating 2nd function
    printf("hey there we are the butlers friends\n");
}



void butlersss(void){ //creating third function 
    printf("hey there we are the butlersss freinds\n");
}

void fourth(void){ //creating fourth function
    printf("This is actually the fourth function\n");
}





