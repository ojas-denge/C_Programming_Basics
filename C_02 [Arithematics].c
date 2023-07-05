#include <stdio.h>
int main () {

//01 - CODE FOR ADDITION
    int n1, n2;
    
    printf("Enter FIRST Value: \n");
    scanf("%d",&n1);
    
    printf("Enter SECOND Value: \n");
    scanf("%d",&n2);
    
    int sum = n1+n2;
    printf("Their SUM is %d \n\n",sum);



//02 - CODE FOR ADDITION [OPTIMISED]
    //The another alternative to sum code (C_02.c) which is more optimised i.e. uses direct formula in string

    printf("Their OPTIMISED SUM is %d \n\n", n1+n2);



//03 - SAME CODE BUT IS USED  FOR SUBTRACTION, MULTIPLICATION AND DIVISION

    printf("Their SUBTRACTION is    : %d \n",n1-n2);
    printf("Their MULTIPLICATION is : %d \n",n1*n2);
    printf("Their DIVISION is       : %d \n\n",n1/n2);



//04 - MODULES

    int n101 = 120 % 10;
    int n102 = 120 % 100;
    
    printf("Value of '120 % 10'  is: %d \n", n101);
    printf("Value of '120 % 100' is: %d \n\n", n102);

    //Module aka % gives the remainder after division
    


//05 - ARITHEMATIC INSTRUCTIONS

    
    int add       = n1+n2;
    int subtract  = n1-n2;
    int multi     = n1*n2;
    int divide    = n1/n2;
    int remainder = n1%n2;
    
    //THERE SHOULD BE ONLY ONE VARIABLE ON LHS
    //USE pow(x,y) FOR X^Y
    //% IS USED FOR FINDING REMAINDER WHEN DIVIDED
    //PRECEDENCE IS FOLLOWED BY '/, *, %' THEN '+, -' AND '='
    //PRECEDENCE OF AN EQUATION IS FROM LEFT TO RIGHT



//06 - BRACKETS

    printf("The operation is: 4 * 6 / 8 * 3 \n");
    
    int n01 = 4 * 6 / 8 * 3;
    printf("The value of Operation is: %d \n", n01);
    
    printf("The operation is: (4 * 6) / (8 * 3) is:\n");
    
    int n02 = (4 * 6) / (8 * 3);
    printf("The value of Operation after putting brackets is: %d \n\n", n02);
    
    //The default priority of operator is from left to right, but to change it, usage of brackets can be done
    


//07 - CONVERTING 'float' INTO 'int' FORCEFULLY

    int n=1.9999999;
    printf("Converting 'float' Forcefully Into 'int' turns 1.9999999 => %d \n\n", (int)n);


    return 0;
}