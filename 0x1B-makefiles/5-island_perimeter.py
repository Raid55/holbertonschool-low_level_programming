#!/usr/bin/python3
""" Isle of Perimeters"""


def island_perimeter(grid):
    """ Calculates Perimeter """
    rowLen = len(grid)
    colLen = len(grid[0])
    tmpSum = 0

    for i in range(0, rowLen):
        for j in range(0, colLen):
            if grid[i][j] == 1:
                if j + 1 >= colLen or grid[i][j + 1] == 0:
                    tmpSum += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    tmpSum += 1
                if i + 1 >= rowLen or grid[i + 1][j] == 0:
                    tmpSum += 1
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    tmpSum += 1
    return tmpSum
