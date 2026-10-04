class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int rSum = 0;
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;
        for(int i=0; i<nums.size();i++){
            rSum+=nums[i];
            if(prefixSum.contains(rSum-k)){
                count+=prefixSum[rSum-k];
            }
            prefixSum[rSum]+=1;
        }
        return count;
    }
};