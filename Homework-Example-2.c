#include <stdio.h>

int myFunction(int x);

/*******************************************************************************
* Function title: main
*
* Summary:
* This program calls a function to multiply a value by 5, then prints
* the result
*
* Inputs: none
* Outputs: int: 0
*
* PSEUDOCODE:
* Begin
*   initialize value to be operated on
*   y = myFunction(x)
*   print y
* End
*******************************************************************************/

int main()
{
    // initialize value to be operated on
    int x = 5;

    // x = myFunction(y)
    y = myFunction(x);

    // print x
    printf("Y: ", y);

    return 0;
}


/*******************************************************************************
* Function title: myFunction
*
* Summary: This function multiplies a number by 5.
*
* Inputs:
*      int x: number to be multiplied by 5
* Outputs:
*      int: an integer that is the result of the multiplication
*
* PSEUDOCODE:
* Begin
*     initialize y to be x * 5
*     return value of y
* End
*******************************************************************************/

int myFunction(int x)
{
    // initialize x to be y * 5
    int y = x * 5;

    // return value of x
    return y;
}
