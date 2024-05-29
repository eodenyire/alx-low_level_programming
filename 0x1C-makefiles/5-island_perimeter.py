#!/usr/bin/python3
"""Module for calculating the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Calculate the perimeter of the island within the grid.

    Args:
        grid (list): A list of lists representing the island,
        where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.

    The function iterates through each cell in the grid to
    count the number of land cells and neighboring edges.

    It then calculates the perimeter using the formula:
    perimeter = land_cells * 4 - shared_edges * 2.
    """
    width = len(grid[0])
    height = len(grid)
    land_cells = 0
    shared_edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                land_cells += 1
                if j > 0 and grid[i][j - 1] == 1:
                    shared_edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    shared_edges += 1

    return land_cells * 4 - shared_edges * 2
