#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op ops[] = 
	{
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{NULL, NULL}
	};

	while(ops[i].op && s[1] == 0)
		if (ops[i].op[0] == *s)
			return ((ops[i].f));

	return (NULL);
}
