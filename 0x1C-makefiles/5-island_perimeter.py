#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.

    Raises:
        ValueError: If the grid is not rectangular or exceeds the size limit.

    """

    if not grid:
        return 0

    # Check if the grid is rectangular and within size limits
    row_len = len(grid[0])
    for row in grid:
        if len(row) != row_len or len(row) > 100:
            raise ValueError("Invalid grid")

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1

                # Check right
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

                # Check top
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                # Check bottom
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter

