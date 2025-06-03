#include <stdio.h>
#include <string.h>


enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5 , Fri = 6 , Sat = 7};


int main(){
    //enum is a user definef type of named integer identifier
    //it helps to make code more readable

    enum Day today = Sun;

    printf("%d", today); //enums are not strings but the can be treated as integers 

    return 0;
}

//personally i dont see the use case of a feature like enums maybe as time goes on i will learn it 