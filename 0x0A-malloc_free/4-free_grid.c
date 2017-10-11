#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees a grid/ 2d array
 * @grid: grid to clear
 * @height: height of grid to b cleared
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	height--;
	while (height > -1)
		free(grid[height]), height--;
	free(grid);
}
