#include <stdio.h>
int main () {
    
    /*
01 ASSIGNMENT OPERATORS:
     = [ASSIGNS VALUE]
    += [X+=Y IS SAME AS X+Y=X', BUT REPLACES X BY ITS NEW VALUE X']
    -= [X-=Y IS SAME AS X-Y=X', BUT REPLACES X BY ITS NEW VALUE X']
    *= [X*=Y IS SAME AS X*Y=X', BUT REPLACES X BY ITS NEW VALUE X']
    /= [X/=Y IS SAME AS X/Y=X', BUT REPLACES X BY ITS NEW VALUE X']
    %= [X%=Y IS SAME AS X%Y=X', BUT REPLACES X BY ITS NEW VALUE X']
    
    1 = TRUE
    2 = FALSE
    */
    
    int n1, n2;
    
    n1=5;
    n2=2;
    
    printf("%d \n",n1 += n2);
    printf("%d \n",n1 -= 3);
    printf("%d \n",n1 *= 2.5);
    printf("%d \n\n",n1 %= n2);
    
    
    /*
02 RELATIONAL OPERATORS:
    [==] TO CHECK IF THE CASES ARE EQUAL OR NOT
    [>, >=] TO CHECK IF THE CASES ARE GREATER THAN OR EQUAL TO OR NOT
    [<, <=] TO CHECK IF THE CASES ARE LESSER THAN OR EQUAL TO OR NOT
    [!=] TO CKECK IF THE CASES ARE NOT EQUAL TO (OPPOSITE OF EQUAL TO)
    1=TRUE
    2=FALSE
    */
     
    int n3, n4;
    
    n3=69;
    n4=420;
    
    printf("%d \n",n1 <= 100);
    printf("%d \n",n1 == 50);
    printf("%d \n",n2 >= n1);
    printf("%d \n\n",n2 != 420);


    /*
03 LOGICAL OPERATORS:
    && AND
    || OR
    ! NOT
    
    1 = TRUE
    2 = FALSE
    */
     
    int n5, n6;
    
    n5=69;
    n6=420;
    
    printf("%d \n",n1 == 50 && n1 <= 100);
    printf("%d \n",n1 <= 100 || n1 == 50);
    printf("%d \n",!(n2 <= n1));
    printf("%d \n\n",!(n1 == 50 && n1 <= 100));
    
    return 0;
}