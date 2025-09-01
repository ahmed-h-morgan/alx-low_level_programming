#!/usr/bin/python3
"""
Island Perimeter Calculation Module
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a grid.

    The grid is represented as a 2D list where:
    - 0 represents water
    - 1 represents land

    The island is assumed to have no lakes and is completely surrounded by water.

    Args:
        grid (list of list of int): The grid representing the island and water

    Returns:
        int: The perimeter of the island
    """
    if not grid or not grid[0]:
        return 0

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:  # Found land
                # Check all four directions
                # Check top: if first row or cell above is water
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom: if last row or cell below is water
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check left: if first column or cell to left is water
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right: if last column or cell to right is water
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
