class NumMatrix {
    vector<vector<int>> grid;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        grid = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int row = row1; row<=row2;row++){
            for(int col = col1; col<=col2;col++){
                sum+= this->grid[row][col];
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */