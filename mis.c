// Header Files
#include <stdio.h>
#include <stdbool.h>

// Global Variables
float Num1, Num2, Num3, Result;
char AEN = 'a', X;

// Function Space
void check()
{
  printf("\nInput arithmetic (a to Add, s to Subtract,\nm to Multiply, d to Divide): ");
  scanf(" %c", &X); // this askes the user if they want to add, subtract, multiply, divide
  ArithTeller();
  printf("\nInput value1: ");
  scanf("%f", &Num1);
  printf("Input value2: ");
  scanf("%f", &Num2); // this will get the value from the user to operate with
  printf("Getting your answer.....\n\n");
}

void ArithTeller()
{
  switch (X) // this tells the user that they've successfully entered a Arithmetic
  {
  case 'a':
    printf("\nYou've selected Addition");
    break;
  case 's':
    printf("\nYou've selected Subtraction");
    break;
  case 'm':
    printf("\nYou've selected Multiplication");
    break;
  case 'd':
    printf("\nYou've selected Division");
    break;
  }
}

void math()
{
  switch (X) // here all the math is done with the opperands and oporaters
  {
  case 'a': // addition
    Result = (Num1 + Num2);
    printf("%f + %f = %f\n", Num1, Num2, Result);
    break;
  case 's': // subtraction
    Result = (Num1 - Num2);
    printf("%f - %f = %f\n", Num1, Num2, Result);
    break;
  case 'm': // multiplication
    Result = (Num1 * Num2);
    printf("%f x %f = %f\n", Num1, Num2, Result);
    break;
  case 'd': // division
    Result = (Num1 / Num2);
    printf("%f / %f = %f\n", Num1, Num2, Result);
    break;
  }
}

void loop()
{ // this does arithmetics on your previous result value(this is how you can do multi-value math)
  printf("Input arithmetic: ");
  scanf(" %c", &X); // new arithmetic to do math with
  ArithTeller();    // same perpose as previous
  printf("\nInput a value: ");
  scanf(" %f", &Num3); // new number to do math with
  switch (X)           // doing math on your current result
  {
  case 'a': // addition
    printf("\n%f + ", Result);
    Result += Num3;
    printf("%f = %f\n", Num3, Result);
    break;
  case 's': // subtraction
    printf("\n%f - ", Result);
    Result -= Num3;
    printf("%f = %f\n", Num3, Result);
    break;
  case 'm': // multiplication
    printf("\n%f x ", Result);
    Result *= Num3;
    printf("%f = %f\n", Num3, Result);
    break;
  case 'd': // division
    printf("\n%f / ", Result);
    Result /= Num3;
    printf("%f = %f\n", Num3, Result);
    break;
  }
  printf("\nInput a to do more arithmetic on your result,\ninput n to start a new calculation, input e to end: ");
  scanf(" %c", &AEN);
  switch (AEN) // without this, it'd automatically start a new calculation without giving us the option to select
  {
  case 'a': // if the user need to do even more arithmetic on the current result
    loop();
    break;
  case 'n': /*if the user wants to start anew calculation,
  but we don't need to run the code block "check" because the for loop will do it for us*/
    printf("\n You've Started a New Calculation:-\n\n");
    break;
  }
}
// Main Code
int main()
{
  printf("Welcome to Imtinan's Basic Math Calculator!\n");
  for (;;) // loops the code below untill conditions are meet
  {
    if (AEN == 'e') // if we're running this after running the "loop" code block and the AEN result was e, then this'll terminate the loop
    {

      printf("\n    You've Ended Calculating Here.\n");
      break;
    }
    check(); // runs the check which get a arithmetic and the values
    math();  // it does the prosesing of the values gotten from the "check" code block
    printf("\nInput a to do arithmetic on your result,\ninput n to start a new calculation, input e to end: ");
    scanf(" %c", &AEN);
    //^^^ After you get your result, it askes what to do next
    if (AEN == 'e') /*this if statement will terminate the loop stops all calculations
      permanently if the user requests it by inputting e */
    {
      printf("\n    You've Ended Calculating Here.\n");
      break;
    }
    switch (AEN) // this will do stuff according to what the input the user outputed
    {
    case 'a': // this will let the user do things like multi-number(more than 2) calculations
      loop();
      break;
    case 'n': // this will let the user start a brand new calculation of different opperands and operators
      printf("\n You've Started a New Calculation:-\n");
      break;
    default: // if the user puts a invalid command, it will start a new calculation and ignore the user input
      printf("\n  Invalid Command, Starting New Calculation:- \n");
    }
  }
  return 0;
}