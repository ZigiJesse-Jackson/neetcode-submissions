class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row_checker, col_checker;
        map<pair<int, int>, unordered_set<char>> sub_checker;

        bool isInserted = true;
        for(int r = 0;r < 9; r++){
            for(int c = 0; c < 9; c++){
                char let = board[r][c];
                if(let == '.'){
                    continue;
                }

                isInserted = row_checker[r].insert(let).second && col_checker[c].insert(let).second && sub_checker[{r/3, c/3}].insert(let).second;
                if(!isInserted){
                    return isInserted;
                }
            }
        }
        return isInserted;
    }
};