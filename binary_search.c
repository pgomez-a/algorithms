#include "algorithm.h"

int	binary_search(int num, int len, int *list)
{
	int	start;
	int	middle;

	start = 0;
	len--;
	middle = (len - start) / 2;
	while (list[middle] != num)
	{
		if (list[middle] > num)
			len = middle;
		else if (list[middle] < num)
			start = middle;
		middle = start + (len - start) / 2;
		if (start == len && middle[list] != num)
			return (-1);
	}
	return (middle);
}
