class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0, j=1;
        while(j<nums.size()){
            if(nums[k]<nums[j]){
                swap(nums[++k], nums[j]);
            }
            j++;
        }
        return k+1;
    }
};