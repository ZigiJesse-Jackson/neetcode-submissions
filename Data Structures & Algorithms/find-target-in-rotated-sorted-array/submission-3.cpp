class Solution {
    int bs(const vector<int>& nums, int l, int r, int target){
        while(l<=r){
            int mid = l+((r-l)/2);
            if(nums[mid]==target) return mid;
            if(nums[mid]<target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, mid;
        // find pivot
        while(l<r){
            mid = l+((r-l)/2);
            if(nums[mid]==target) return mid;
            if(nums[r]<nums[mid]){
                l = mid+1;
            }else r = mid;
        }

        int res  = bs(nums, 0, l, target);
        
        return res == -1? bs(nums, l, nums.size()-1, target):res;
    }
};
