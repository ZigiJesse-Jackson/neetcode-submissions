class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int l = 0, rSum = 0, minSize = INT_MAX;

        for(int r = 0; r<nums.size();r++){
            rSum += nums[r];
            if(rSum>=target){
                while(l<=r && rSum>=target){
                    minSize = min(minSize, (r-l)+1);
                    rSum-=nums[l];
                    l++;
                }
            }
        }
        if(minSize == INT_MAX) return 0;
        return minSize;
        
    }
};