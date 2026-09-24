class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int curr_size = nums.size();
        for(int i=0;i<curr_size;i++){
            nums.emplace_back(nums[i]);
        }
        return nums;
    }
};