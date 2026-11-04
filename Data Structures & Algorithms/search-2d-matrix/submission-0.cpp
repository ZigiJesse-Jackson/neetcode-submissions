class Solution {

    bool find(const vector<int>& arr, const int& target){
        int l = 0, r = arr.size()-1, m, mid;

        while(l<=r){

            m = l+((r-l)/2);
            mid = arr[m];

            if(mid==target) return true;
            else if(mid<target) l = m+1;
            else r = m-1;
        }

        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size()-1, m;
        int cSize = matrix[0].size()-1;
        while(l<=r){
            m = l+((r-l)/2);

            if(matrix[m][cSize]<target) {
                l = m+1;
            }
            else if(matrix[m][0]>target){
                r = m-1;
            }else{
                return find(matrix[m], target);
            }
        }

        return false;
;
    }
};
