#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: The 2D array to free memory from
 * @height: The height of the 2D array
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i > height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
