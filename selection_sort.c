#include "algorithms.h"

/**
 ** Returns the smallest item in the list
 **/

static int	smallest_num(int num, int len, int *list)
{
	int	count;

	count = 0;
	while (count < len)
	{
		if (list[count] < num)
			return (0);
		count++;
	}
	return (1);
}

/**
 ** Sort a list in ascending order
 **/

void	selection_sort(int len, int *list)
{
	int	count_y;
	int	count_x;
	int	num;

	count_y = 0;
	while (count_y < len)
	{
		count_x = count_y + 1;
		while (count_x < len)
		{
			if (smallest_num(list[count_x], len - count_y, list + count_y))
			{
				num = list[count_x];
				list[count_x] = list[count_y];
				list[count_y] = num;
			}
			count_x++;
		}
		count_y++;
	}
}
