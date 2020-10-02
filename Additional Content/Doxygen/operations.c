/** @file operations.c
 *  @brief A console driver.
 *  The function definitions for the calculator operations.
 *
 *  @author Sarath T.V
 *  @bug No know bugs.
 */
#include"operations.h"

/// another global variable .
int test_var;

int add(int VarOne,int varTwo)
{
return(VarOne+varTwo);
}

int sub(int VarOne,int varTwo)
{
int diff=0;
return(VarOne-varTwo);
}

int mul(int VarOne,int varTwo)
{

return(VarOne*varTwo);
}

int divs(int VarOne,int varTwo)
{

    return(VarOne/varTwo);
}
