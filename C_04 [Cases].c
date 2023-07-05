#include <stdio.h>
int main() {
    int age;
    
    printf("Enter Age:\n");
    scanf("%d", &age);

//01 -  IF-ELSE STATEMENT
    if (age < 13) {
        printf("Minor \n\n");
    }
    else if (age >= 13 && age < 18) {
        printf("Teen \n\n");
    }
    else {
        printf("Adult \n\n");
    }

    //"IF" checks the statement and if its true or false, it moves to the next statement.
    //"ELSE IF" checks the statement and gives output if its true or moves forward if its not.
    //If none of the statements are true, "ELSE" gives the final result.



//02 - TERNARY OPERATOR

    age>= 18 ? printf("Adult\n\n") :  printf("Minor\n\n");
    
    /*
    '?' aka 'TERNARY OPERATOR' acts as "OR" case. Its format is:
    [a condition] ?  [an output if its true] : [an output if its false] ;
    */



//03 - SWITCH CASE

    int day;
    
    printf("Select which day is it? \n");
    
    printf("Monday    = 1 \n");
    printf("Tuesday   = 2 \n");
    printf("Wednesday = 3 \n");
    printf("Thursday  = 4 \n");
    printf("Friday    = 5 \n");
    printf("Saturday  = 6 \n");
    printf("Sunday    = 7 \n");
    
    scanf("%d", &day);
    
    switch (day) 
    {
        case 1 : printf("Gotta Make Money Bitch! \n\n");
        break;
        case 2 : printf("Work Harder! \n\n");
        break;
        case 3 : printf("Keep Pushing Mf! \n\n");
        break;
        case 4 : printf("Almost there, Keep Grinding! \n\n");
        break;
        case 5 : printf("Keep It Up Baby, Let's Party Tonight! \n\n");
        break;
        case 6 : printf("Just Sleep! \n\n");
        break;
        case 7 : printf("Laazzzyyyy Daayyyy! \n\n");
        break;
        default : printf("Invalid Input. Try Again. \n\n");
    }
    /*
    To create a switch case, assign a variable first.
    Then assign cases for possible values of vairables.
    There is also a default case which acts as 'else' in if and else operator.
    The format is as follows, 
    
      "  switch (Variable) 
        {
            case [value] : [Output];
            break;
            default : [Output];
        }   "
    */



//04 - NESTED CODE

    int n1;
    
    printf("Enter a Number:\n");
    scanf("%d", &n1);
    
    if (n1>=0) {
        printf ("It is a Positive Number \n");
        
        if (n1%2==0) {
            printf ("It is Even NumberC \n\n");
        }
        else {
            printf ("It is Odd Number \n\n");
        }
    }
    
    else {
        printf("It is a Negative Number.\n\n");
    }
    /* Here we used if and else condition under other if else condition.
    It can be done in C language and is known as 'nested code' */

    return 0;
}