// Preprocessor - tells compiler to put code from header into program before making it executable
#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  getchar();
  
  //  Variables 

  int myVariable;
  int x;
  int a, b, c, d;
  char letter;
  float the_float;

  int this_is_a_number;
 
  printf( "Please enter a number: " );
  scanf( "%d", &this_is_a_number );
  printf( "You entered %d", this_is_a_number );
  getchar();

// Operators 
/*
  >     greater than              5 > 4 is TRUE
  <     less than                 4 < 5 is TRUE
  >=    greater than or equal     4 >= 4 is TRUE
  <=    less than or equal        3 <= 4 is TRUE
  ==    equal to                  5 == 5 is TRUE
  !=    not equal to              5 != 4 is TRUE
  */

  a = 4 * 6; /* (Note use of comments and of semicolon) a is 24 */
  a = a + 5; /* a equals the original value of a with five added to it */
  a == 5;     /* Does NOT assign five to a. Rather, it checks to see if a equals 5.*/ 

  a < 5;  /* Checks to see if a is less than five */
  a > 5;  /* Checks to see if a is greater than five */ 
  a == 5; /* Checks to see if a equals five, for good measure */ 

// If Syntax
/*if ( statement is TRUE )
    Execute this line of code
  
  // else 
  if ( TRUE ) {
    // Execute these statements if TRUE  
    }
  else {
    //Execute these statements if FALSE
    }
    */

// Boolean operators
  //A. !( 1 || 0 )         ANSWER: 0    
  //B. !( 1 || 1 && 0 )    ANSWER: 0 (AND is evaluated before OR)
  //C. !( ( 1 || 0 ) && 0 )  ANSWER: 1 (Parenthesis are useful)

return 0;
}

// every program starts intside "main"
// getchar() - another function call, keeps window from closing 