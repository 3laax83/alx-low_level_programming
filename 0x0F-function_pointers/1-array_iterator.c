#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given
 * as a parameter on each element of an array.
 * @array: pointer to array.
 * @size: size of array.
 * @action: pointer the action function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size++ && action)
		action(array);
}
