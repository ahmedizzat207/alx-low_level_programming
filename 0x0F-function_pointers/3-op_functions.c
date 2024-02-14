#include "3-calc.h"

/**
 * op_add - The function adds two integers
 * @a: First integer in the summation operation
 * @b: Second integer in the summation operation
 *
 * Description: The function return the result of the summation process of
 * the both given arguments
 *
 * Return: The summation process result
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - The function subtract two integers
 * @a: First integer in the subtraction operation
 * @b: Second integer in the subtraction operation
 *
 * Description: The function return the result of the subtraction process of
 * the both given arguments
 *
 * Return: The subtraction process result
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - The function multiply two integers
 * @a: First integer in the multiplication operation
 * @b: Second integer in the multiplication operation
 *
 * Description: The function return the result of the multiplication process
 * of the both given arguments
 *
 * Return: The multiplication process result
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - The function divid two integers
 * @a: First integer in the division operation
 * @b: Second integer in the division operation
 *
 * Description: The function return the result of the division process of the
 * both given arguments
 *
 * Return: The division process result
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - The function get the reminder of two integers
 * @a: First integer in the division
 * @b: Second integer in the division
 *
 * Description: The function return the result or the modulo operation that
 * takes the reminder of dividing the first integer of the second one
 *
 * Return: The modulo operation result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
