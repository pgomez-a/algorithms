#include "algorithm.h"

int	binary_search(int num, int len, int *list)
{
	int	start;
	int	middle;

	start = 0;
	len--;
	middle = len / 2;
	while (list[middle] != num)
	{
		if (list[middle] > num)
			len = middle - 1;
		else if (list[middle] < num)
			start = middle + 1;
		middle = start + (len - start) / 2;
		if (start > len)
			return (-1);
	}
	return (middle);
}
