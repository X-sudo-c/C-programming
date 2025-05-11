#include  <stdio.h>



int main(){
    double prices[] = { 5.0, 10.0, 15.0, 25.0, 20.0, 30.0} ;


    printf("%lu bytes\n", sizeof(prices)); // using sizeof() shows you  how big an Object is in bytes output = 48bytes

    for (int i = 0 ; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$ %.2lf\n", prices[i]);
       
    }


    const char *people[] ={"char", "john", "ethan", "leat", "Sarah", "Esther", "rita"};

    for (int i = 0; i < sizeof(people)/sizeof(people[0]); i++){
        printf("%s \n",people[i]);


    }



    return 0;
}