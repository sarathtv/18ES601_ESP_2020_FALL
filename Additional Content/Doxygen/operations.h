/** @file operations.h
*  @brief The function prototypes.
*  @author Sarath T.V.
*  @bug No bugs in this functions.
*/


/**
* @brief This add function adds two numbers.
* This is a detailed description of the add function.
* @param varOne This is the first integer for addition.
* @param varTwo This is the second integer for addition.
* @return The sum of the two integer arguments.
*/
int add(int varOne,int varTwo);


/// @brief This sub function subtracts two numbers.
/// This is a detailed description of the sub function.
///@param[in] varOne This is the first integer for subtraction.
/// @param[in] varTwo This is the second integer for subtraction.
/// @param[out] diff The difference of the two integer arguments.

int sub(int varOne,int varTwo);

/**
* @brief This mul function multiplies two numbers.
* This is a detailed description of the mul function.
* @param varOne This is the first integer for multipilicaiton.
* @param varTwo This is the second integer for multipilicaiton.
* @return The product of the two integer arguments.
*/
int mul(int varOne,int varTwo);


/// @brief This divs function subtracts two numbers.
/// This is a detailed description of the divs function.
///@param[in] varOne This is the first integer for division.
/// @param[in] varTwo This is the second integer for division.
/// @param[out]  rem The reminder of the two integer arguments.
/// @note Please take care of the input argument types
/// @warning divs wont work properly if floats are given.
/// @attention this is some thing that you need to take care
/// @see add(), sub()
/// @see main.c
int divs(int varOne,int varTwo);
