#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }

        int rows = grid.size();
        int cols = grid[0].size();

        int row = 0;
        int col = cols - 1;
        int count = 0;

        while (row < rows && col >= 0) {
            if (grid[row][col] < 0) {
                count += (rows - row);
                col--;
            } else {
                row++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    cout << "Number of negative numbers: "
         << sol.countNegatives(grid) << endl;

    return 0;
}
