#ifndef ALGORITHMS_H
# define ALGORITHMS_H

#include <stdio.h>
#include <stdlib.h>

/**
 ** Search algorithms
 **/

int	linear_search(int num, int len, int *list);
int	binary_search(int num, int len, int *list);

/**
 ** Sort algorithms
 **/

void	selection_sort(int len, int *list);

#endif
