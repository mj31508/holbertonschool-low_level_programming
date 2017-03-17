#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - prototype function that holds a *s pointer
 * @s: pointer to a character
 *
 *
 * Return: Null if operators aren;t selected.
 **/

int (*get_op_func(char *s))(int, int)
{
	int i =0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};




	while (ops[i]->op != NULL)
	{
		if(ops.op[0] == s[0] && s[i] == '\0')
			return (ops[i]->f);
		i++;
	}
	return (NULL);
}

























































#include "_3_CALC_H"

/**
 * get_op_func - function that holds a function pointer
 * @s: charactr pointer
 *
 * Return: pointer
 **/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
