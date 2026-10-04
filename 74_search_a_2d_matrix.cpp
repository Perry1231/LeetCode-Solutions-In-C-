class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int row_left = 0;
        int row_right = matrix.size() - 1;

        while (row_left <= row_right) {
            int mid_row = row_left + (row_right - row_left) / 2;
            
            if (target >= matrix[mid_row].front() && target <= matrix[mid_row].back()) {
                
                int col_left = 0;
                int col_right = matrix[mid_row].size() - 1;

                while (col_left <= col_right) {
                    int mid_col = col_left + (col_right - col_left) / 2;

                    if (matrix[mid_row][mid_col] == target) {
                        return true;
                    }
                    else if (matrix[mid_row][mid_col] < target) {
                        col_left = mid_col + 1;
                    }
                    else {
                        col_right = mid_col - 1;
                    }
                }
                
                // Якщо в діапазоні рядка не знайшли — значить, числа взагалі немає в матриці
                return false;
            }
            else if (target < matrix[mid_row].front()) {
                row_right = mid_row - 1; 
            }
            else {
                row_left = mid_row + 1; 
            }
        }
        
        return false;
    }
};