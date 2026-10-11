class Solution {

    void reverse(vector<int>& nums, int l, int r){
        while(l<r){
            swap(nums[l++], nums[r--]);
        }
    }

public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        if(k == 0) return;
        int n = nums.size()-1;
        reverse(nums, 0, n);
        reverse(nums, 0, k-1);
        reverse(nums, k, n);
    }
};