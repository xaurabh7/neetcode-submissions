class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Track seen digits 1-9 for rows, columns, and 3x3 sub-boxes
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                // Convert char '1'-'9' to 0-indexed integer 0-8
                int num = board[r][c] - '1';

                // Calculate sub-box index (0 to 8)
                int boxIdx = (r / 3) * 3 + (c / 3);

                // Check for duplicates
                if (rows[r][num] || cols[c][num] || boxes[boxIdx][num]) {
                    return false;
                }

                // Mark digit as seen
                rows[r][num] = true;
                cols[c][num] = true;
                boxes[boxIdx][num] = true;
            }
        }

        return true;
    }
};
