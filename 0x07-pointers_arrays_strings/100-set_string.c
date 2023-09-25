#include "main.h"

/**
 * set_string - value setter.
 * Description: a function that sets the
 * value of a pointer to a char.
 */

void set_string(char **s, char *to);
{
	char *save = to;
	**s = save;
}
