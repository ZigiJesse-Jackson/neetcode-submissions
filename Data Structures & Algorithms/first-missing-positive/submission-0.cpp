class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            if(nums[i]<=0 || nums[i]>nums.size()){
                i++;
                continue;
            }
            int idx = nums[i]-1;
            if(nums[i]!=nums[idx]){
                swap(nums[i], nums[idx]);
            }else{
                i++;
            }
        }

        for(int x=0;x<nums.size();x++){
            if(nums[x] != x+1){
                return x+1;
            }
        }
        return nums.size()+1;
    }
};