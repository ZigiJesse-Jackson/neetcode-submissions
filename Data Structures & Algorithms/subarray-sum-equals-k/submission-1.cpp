class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int rSum = 0;
        // vector<int> prefixSum;
        // partial_sum(nums.begin(), nums.end(), prefixSum.begin());

        for(int i=0; i<nums.size();i++){
            rSum = 0;
            for(int j=i;j<nums.size();j++){
                rSum+=nums[j];
                if(k==rSum){
                    count++;
                }
            }
        }
        return count;
    }
};