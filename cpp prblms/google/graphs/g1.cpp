// Find the number of islands
#include <bits/stdc++.h>

using namespace std;

int main()
{
}

// we hav to see for each island marked as 1 whether it is visited or not .For this we need some graph traversal algorithm...its a bfs algorithm
class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
    }
};

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
    // Function to find the number of islands.
    //     int numIslands(vector<vector<char>>& grid) {
    //         // Code here
    //     }
    // };

    bool isSafe(vector<vector<char>> &grid, int r, int c,
                vector<vector<bool>> &visited)
    {
        int row = grid.size();
        int col = grid[0].size();

        // r is in range, c is in range, value
        // is 1 and not yet visited
        return (r >= 0) && (r < row) && (c >= 0) &&
               (c < col) && (grid[r][c] == '1' && !visited[r][c]);
    }

    // A utility function to do DFS for a
    // 2D boolean matrix. It only considers
    // the 8 neighbours as adjacent vertices
    void dfs(vector<vector<char>> &grid, int r, int c,
             vector<vector<bool>> &visited)
    {

        // These arrays are used to get
        // r and c numbers of 8
        // neighbours of a given cell
        vector<int> rNbr = {-1, -1, -1, 0, 0, 1, 1, 1};
        vector<int> cNbr = {-1, 0, 1, -1, 1, -1, 0, 1};

        // Mark this cell as visited
        visited[r][c] = true;

        // Recur for all connected neighbours
        for (int k = 0; k < 8; ++k)
        {
            int newR = r + rNbr[k];
            int newC = c + cNbr[k];
            if (isSafe(grid, newR, newC, visited))
            {
                dfs(grid, newR, newC, visited);
            }
        }
    }

    // The main function that returns
    // count of islands in a given boolean
    // 2D matrix
    int numIslands(vector<vector<char>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();

        // Make a bool array to mark visited cells.
        // Initially all cells are unvisited
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        // Initialize count as 0 and traverse through
        // all cells of the given matrix
        int count = 0;
        for (int r = 0; r < row; ++r)
        {
            for (int c = 0; c < col; ++c)
            {

                // If a cell with value 1 is not visited yet,
                // then a new island is found
                if (grid[r][c] == '1' && !visited[r][c])
                {

                    // Visit all cells in this island.
                    dfs(grid, r, c, visited);

                    // increment the island count
                    ++count;
                }
            }
        }
        return count;
    }
};