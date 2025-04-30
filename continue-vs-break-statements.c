#include <stdio.h>

int main()
{
    //continue = skips rest of the code & forces the next iteration of the loop 
    // break = exits a loop/ switch 
    for (int i=1; i <= 20; i++)
    {
        if (i == 13 ){
            continue; //once it reaches 13 it would skip that current iteration of the code and then
            //break; //but breaking would terminate the code as a whole ; Thats the differrence between the continiue and break statement;...
        }
        printf("%d\n", i);
    }




    return 0;
}

/*
1
2
3
4
5
6
7
8
9
10
11
12 // This is the output of function 
14
15
16
17
18
19
20
*/