/** @file main.c
*  @brief The application code.
*  @author Sarath T.V.
*  @bug Some bugs are there in this files.
*/
#include <stdio.h>
#include <stdlib.h>
#include"operations.h"


#define pI 3.14  /**< Mathematical macro   */

#define SomeOtherMarco 123  ///< Another way for writing comments for macro.

/// This is a global string
char *SomeString ="Doxygen Test";

/// This is a global integer.
int gloVar=10;

int main()
{
    printf("%d",add(10,9));
    return 0;
}
