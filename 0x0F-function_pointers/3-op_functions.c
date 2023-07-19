#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
  *op_add - function that adds two integers
  *@a: 1st operand
  *@b: 2nd operand
  *Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - function that subtracts two integers
  *@a: 1st operand
  *@b: 2nd operand
  *Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - function that multiplies two integers
  *@a: 1st operand
  *@b: 2nd operand
  *Return: multiplication of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - function that divides two integers
  *@a: 1st operand
  *@b: 2nd operand
  *Return: divisible of a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  *op_mod - function that finds modulo of two digits
  *@a: 1st operand
  *@b: 2nd operand
  *Return: remainder of a and b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
