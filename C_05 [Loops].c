#include <stdio.h>
int main () {
    int i;

//01 - FOR LOOP
    for(i=1; i<=10; i=i+1) {
        printf("Error404 \n");
    }
    /*
    'for' Loop is used to create a loop.
    It is combination of 3 statements.
    It has the following format,
    "   for(initialization; condition; updation) {} "
    e.g. for(i=1; i<=10; i=i+1) {}
    */  printf("\n");


//02 - INCREMENT AND DECREMENT OPERATOR

    int n1;

    printf("Write a Number: ");
    scanf("%d", &n1);
    
    printf("The increment '++i' of is: %d\n\n", ++n1);
    
    printf("The current value after using 'i++' is: %d\n\n", n1++);
    printf("The value will not increase in same line after using 'i++',\nbut when used next time i.e. %d\n\n", n1);
    
    printf("Same goes for Decrement Operator,\n\n");
    
    printf("The decrement '--i' is: %d\n\n", --n1);
    
    printf("The current value after using 'i--' is: %d\n\n", n1--);
    printf("The value will not increase in same line after using 'i--',\nbut when used next time i.e. %d\n\n\n", n1);
    
    /*
    ++i ->  Pre Increment -> increases then uses
    i++ -> Post Increment -> uses then increases
    --i ->  Pre Decrement -> decreases then uses
    i-- -> Post Decrement -> uses then decreases
    */



//03 - WHILE LOOP
    
    int j=0;
    while(j<=n1) {
        printf("%d \n", j);
        j++;
    }
    printf("\n");



//04 - DO-WHILE LOOP

    int k=0;
    do {
        printf("%d\n", k);
        k++;
    } while(k<=n1);
    printf("\n");



//05 - INFINITE LOOP

    for(n1=1; ; ++n1) {
        printf("Error404");
    }

    return 0;
}