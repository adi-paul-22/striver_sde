#include <iostream>
#include <vector>

using namespace std;
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int low = 0;
            if (matrix.empty()) return false;
            int high = (matrix.size() * matrix[0].size()) - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;
                int row = mid / matrix[0].size();
                int col = mid % matrix[0].size();

                if (matrix[row][col] == target) {
                    return true;
                } else if (matrix[row][col] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            return false;
        }
    };


int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 3;

    Solution solution;
    bool found = solution.searchMatrix(matrix, target);

    if (found) {
        cout << "Target found in the matrix." << std::endl;
    } else {
        cout << "Target not found in the matrix." << std::endl;
    }

    return 0;
}

// Time complexity: O(log(m*n))

// Space complexity: O(1)