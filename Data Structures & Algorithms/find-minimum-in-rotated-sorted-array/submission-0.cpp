class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size()-1, m, res;

        while(l<=r){
            m = l+((r-l)/2);
            
            if(nums[m]<nums[r]){
                res = nums[m];    
                r = m;
            }else{
                res = nums[r];
                l = m+1;
            }
        }
        return res;
    }
};
