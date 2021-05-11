#include "algorithms.h"

/**
 ** Puts the given item in the correct place
 **/

static void	sort_value(int num, int len, int *list)
{
	int	count;

	count = 0;
	while (count < len && list[count] < num)
		count++;
	while (len >= count)
	{
		list[len] = list[len - 1];
		len--;
	}
	list[count] = num;
}

/**
 ** Sorts a list in ascending order
 **/

void	insertion_sort(int len, int *list)
{
	int	count;

	if (len > 1)
	{
		count = 1;
		while (count < len)
		{
			if (list[count] < list[count - 1])
				sort_value(list[count], count, list);
			count++;
		}
	}
}
