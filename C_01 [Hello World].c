#include <stdio.h>
int main () {


//00 HELLO WORLD

    printf("Hello World");
    


//01 VAIRABLES AND COMMENTS

    int number = 25;
    char star = '*';
    int a = 22;
    float pi = 3.14;
    int final_price = 100;

    //Variables are values that act as storage for cetrain values
    /* Variables can start from 'alphabets' and '_'
    And can have combination of 'numericals', 'alphabets' and '_' */

    //This is a sngle line comment//
    
    /*This
       is
       a
    multiple
      line 
    comment*/



//02 PARAGRAPH - [\n]

    printf("Hello World");
    printf("Hello C");
    //The output of code above will be in same line

    printf("Hello World \n");
    printf("Hello C \n");
    //The output of code above will be in different line as "\n" is used



//03 OUTPUT - [printf]

    int age = 18;
    printf("Age is %d \n", age);
 
    float pi = 3.14;
    printf("Value of pi is %f \n", pi);

    char star = '*';
    printf("Star is %c \n", star);

    //'printf' produces an output and prints given values on screen



//04 DECLARATION AND USE

    int s = 69;
    int e = s;
    int x = e * 420;
    int y = 00;
    
    //This is how values are declared in C program
    
    int height_before = 143;
    int height_after = height_before + height_increased;
    int height_increased = 26;
    
    printf("%d \n", height_after);
    //if variables are used before they are declared, code will show an error
    
    int n = u = d = e = 5;
    
    printf("%d \n", u);
    //even if the variables are declared and used at same time, the code will still show an error
    
    //THEREFORE, Variables should always be declard before they are used
    
    return 0;
}