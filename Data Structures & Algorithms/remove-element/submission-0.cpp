class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r=nums.size()-1;
        int i = 0;
        while(i<=r){
            if(nums[i] == val){
                swap(nums[i], nums[r--]);
            }
            else{
                i++;
            }
        }
        return r+1;
    }
};