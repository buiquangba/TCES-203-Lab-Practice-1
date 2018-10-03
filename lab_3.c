#include <stdio.h>
#include <stdlib.h>
/*
3.	Write a function that will read two floating point numbers
(the first read into a variable called first and the second read
 into a variable called second) and then calls the function swap with
  the actual parameters first and second. The swap function having
formal parameters number1 and number2 should swap the value of the two variables.
*/
void getInput(float *, float*);
int main()
{
    float number1, number2;
    getInput(&number1, &number2) ;
    printf("You input the numbers as %f and %f \n", number1, number2);

    return 0;
}

// Gets two floating numbers as input_
void getInput(float *first, float *second) {
    printf("Enter the first number ");
    scanf("%f", first);
    printf("Enter the second number ");
    scanf("%f", second);
}
