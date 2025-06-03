#include <stdio.h>
#include <string.h>


enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5 , Fri = 6 , Sat = 7};


int main(){
    //enum is a user definef type of named integer identifier
    //it helps to make code more readable

    enum Day today = Sun;

    printf("%d", today); //enums are not strings but the can be treated as integers 



    // now how does enum make code more readable

    // if(today == 1 || today == 7)
    // {
    //     printf("\nIts the weekend party time!");
    // }
    // else{
    //     printf("I have to work today :");
    // }

    // the above code doesnt use enums

    
    if(today == Sun|| today == Sat)
    {
        printf("\nIts the weekend party time!");
    }
    else{
        printf("I have to work today :");
    }

    // the code above utilizes the feature enum has in the C language 
    // makes sense but doesnt make enough sense to be a solid use case
    //future kira comment when you see this hopefully you are waayy better at C

    return 0;
}



//personally i dont see the use case of a feature like enums maybe as time goes on i will learn it 