#include "3-calc.h"


int main(int argc, char* argv)
{
	char *op = atoi(argv[2]);
	int num1, num2;

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(get_op_function(op)))
	{
		printf("Error\n");
		exit(99);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (argv[2][0] == '/' || (argv[2][0] == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (get_op_function(op)(num1, num2)));

	return (0);
}
