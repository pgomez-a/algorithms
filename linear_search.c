#include "algorithms.h"

/**
 ** Returns the position of the item we want to find
 **/

int	linear_search(int num, int len, int *list)
{
	int	count;

	count = 0;
	while (count < len)
	{
		if (list[count] == num)
			return (count);
		count++;
	}
	return (-9999);
}
