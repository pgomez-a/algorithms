#include "algorithm.h"

static void	swap_value(int *index, int *find)
{
	int	tmp;

	tmp = *index;
	*index = men;
	*find = tmp;
}

void	selection_sort(int len, int *list)
{
	int	index;
	int	pos;
	int	find;
	int	men;

	index = 0;
	while (index < len)
	{
		pos = index + 1;
		find = index;
		men = list[index];
		while (pos < len)
		{
			if (list[pos] < men)
			{
				men = list[pos];
				find = pos;
			}
			pos++;
		}
		if (men != list[index])
			swap_value(&list[index], &list[find]);
		index++;
	}
}
