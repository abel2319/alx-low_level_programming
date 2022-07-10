#include "3-calc.h"

/**
 * get_op_func
 * @s: operation to return
 *
 * Return: operation corresponding to s
 */
int (*get_op_func(char *s))(int,  int)
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
	while (ops[i].op)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
	}
	return (ops[i].f);
}
