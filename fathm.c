//fathm_ft.c -- converts 2 fathoms to feet
#include <stdio.h>

int main(void){

    int feet, fathoms;

    fathoms = 2;

    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6*fathoms); //whiles i was learning this i made a couple of mistakes in C always use double "" instead of it 

    return 0;
}