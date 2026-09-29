class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        //check multiple 0s
        
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

        for(int i = 0;i<nums.size();i++){
            if(i==0){
                res[i] = suffix[i+1];
            }
            else if(i==s){
                res[i] = prefix[i-1];
            }else{
                res[i] = prefix[i-1]*suffix[i+1];
            }
        }
        return res;

    }
};
