class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        
        vector<int> res(nums.size(), 0);
        vector<int> prefix(nums.size(), 1);
        vector<int> suffix(nums.size(), 1);
        
        int s = nums.size()-1;
        prefix[0] = nums[0];
        suffix[s] = nums[s];
        for(int i=1;i<nums.size();i++){
            prefix[i] = nums[i]*prefix[i-1];
            suffix[s-i] = nums[s-i]*suffix[(s-i)+1];
        }
        res[0] = suffix[1];
        res[s] = prefix[s-1];

        for(int i = 1;i<s;i++){
            
                res[i] = prefix[i-1]*suffix[i+1];
        }
        return res;

    }
};
