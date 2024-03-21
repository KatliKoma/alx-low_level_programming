#!/usr/bin/python3
"""
This module contains a function that calculates the perimeter of an
island described in a grid. The grid is a list of lists of integers where
0 represents a water zone and 1 represents a land zone. The function assumes
the grid is rectangular, surrounded by water, and contains no lakes within the island.
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the grid.
    
    Parameters:
    grid (list of lists of int): The grid representing the map.
    
    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right
                if j == len(grid[i]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
