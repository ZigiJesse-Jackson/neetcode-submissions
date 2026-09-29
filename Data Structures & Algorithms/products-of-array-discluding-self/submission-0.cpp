class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        //check multiple 0s
        int zeroes = 0, product = 1;
        for(int num: nums){
            if(num == 0){
                zeroes++;
            }
            product*=num;
        }
        vector<int> res(nums.size(), 0);

        if(zeroes>1){
            return res;
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                res[i] = accumulate(nums.begin(), nums.begin()+i, 1, multiplies<int>());
                res[i]*= accumulate(nums.begin()+i+1, nums.end(), 1, multiplies<int>());
            }
            else{
                res[i] = product/nums[i];
            }
        }
        return res;

    }
};
