class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, m, mid;

        while(l<=r){
            m = l+((r-l)/2);
            mid = nums[m];
            if(mid==target) return m;
            if(mid<target){
                l = m+1;
            }else{
                r = m-1;
            }
        }

        return -1;
    }
};
