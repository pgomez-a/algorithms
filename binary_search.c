#include "algorithms.h"

/**
 ** Returns the position of the item we want to find
 **/

int	binary_search(int num, int len, int *list)
{
	int	start;
	int	end;
	int	pos;

	start = 0;
	end = len - 1;
	while (start <= end)
	{
		pos = start + ((end - start) / 2);
		if (list[pos] == num)
			return (pos);
		else if (list[pos] < num)
			start = pos + 1;
		else if (list[pos] > num)
			end = pos - 1;
	}
	return (-9999);
}
