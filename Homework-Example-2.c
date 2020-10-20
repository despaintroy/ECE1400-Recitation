#include <stdio.h>

/*******************************************************************************
* Function title: main
*
* Summary:
* This program calls a function to multiply a value by 5, then prints
* the result
*
* Inputs: none
* Outputs: int 0
*
* PSEUDOCODE:
* Begin
*   initialize value to be operated on
*   x = myFunction(y)
*   print x
* End
*******************************************************************************/

int main()
{
    // initialize value to be operated on
    int y = 5;

    // x = myFunction(y)
    x = myFunction(y);

    // print x
    printf("X: ", x);

    return 0;
}


/*******************************************************************************
* Function title: myFunction
*
* Summary: This function multiplies a number by 5.
*
* Inputs:
*      y: number to be multiplied by 5
* Outputs:
*      an integer that is the result of the multiplication
*
* PSEUDOCODE:
* Begin
*     initialize x to be y * 5
*     return value of x
* End
*******************************************************************************/

int myFunction(int y)
{
    // initialize x to be y * 5
    int x = y * 5;

    // return value of x
    return x;
}