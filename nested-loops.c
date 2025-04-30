#include <stdio.h>

//omg at first nested loops were confusing but now i get it !! esoecially with the C syntax


int main(){
    //nested loop = a loop inside a loop;
    //it is extremely situational 


    int rows;
    int columns;
    char symbols;


    printf("Enter no. of rows: \n");
    scanf("%d",&rows);



    printf("Enter no. of colums: ");
    scanf("%d", &columns);


    printf("Enter a symbol to use: ");
    scanf(" %c", &symbols);



    for (int index = 1; index <= rows;  index++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbols);
        }

        printf("\n");


    }






    return 0;



}