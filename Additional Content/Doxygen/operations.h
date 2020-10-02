/** @file operations.h
 *  @brief A console driver.
 *  The function prototype for the calculator operations.
 *
 *  @author Sarath T.V
 *  @bug Some bugs in some functions.
 */


/**
* @brief The add function adds two numbers.
* this is a detailed description of the function add.
* @param varOne  The first integer for adding
* @param varTwo  The second integer for adding
* @return The sum of arguments varOne and varTwo
*/

int add (int varOne,int VarTwo);


/// @brief The sub function subtracts two numbers.
/// this is a detailed description of the function sub.
/// @param  varOne  The first integer for subtracting
/// @param  varTwo  The second integer for subtracting
/// @return The difference of arguments varOne and varTwo

int sub (int varOne,int VarTwo);


/**
* @brief The mul function multiplies two numbers.
* this is a detailed description of the function mul.
* @param[in] varOne  The first integer for multypling
* @param[in] varTwo  The second integer for multypling
* @param[out] Product The Product of arguments varOne and varTwo
* @see operations.c
*/
int mul (int varOne,int VarTwo);


/**
* @brief The divs function divides two numbers.
* this is a detailed description of the function divs.
* @param varOne  The first integer for division
* @param varTwo  The second integer for division
* @return The reminder of arguments varOne and varTwo
* @note Doesnt work with data type other than int.
* @warning divs wont work properly if floats are given.
* @attention This is some thing to take care.
* @see add() sub()
*/
int divs(int varOne,int VarTwo);
