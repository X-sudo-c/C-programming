#include <stdio.h>
#include <string.h>



struct Player{
    char name[12];
    int score;
};

int main()
{
    //a struct is a short for structure
    //struct = collection of related memebers ("variables")  theyre l
    //          they can be off different data types
    //          listted under one name in a block  of memory
    //          VERY SIMILAR to classes in other languages (but no methods)  

    struct Player player1; //this is like defining a struct and its members
    struct Player player2; //this is like defining a struct like a class look at how the player 2 is defined after using "struct Player <define> "

    strcpy(player1.name, "Bro");
    player1.score = 4;


    strcpy(player2.name, "Bra");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);


    printf("%s\n", player2.name);
    printf("%d\n", player2.score);



    return 0;
}