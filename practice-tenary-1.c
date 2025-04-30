#include <stdio.h>


void even_odd(int x ){
    (x % 2 == 0)? printf("This is even %d",x ) : printf("This is False %d", x);


}

int main(){

    /*
    Problem 1: Check Even/Odd
Task: Assign "Even" if a number is even, else "Odd".
    */
   int x;


   printf("Enter to know if even of odd: ");
    scanf("%d",&x);

    even_odd(x);

    
   return 0;


}