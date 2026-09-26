class Solution {
public:
    void quicksort(vector<int>& nums, int l, int r){
        
        // subarray is less than size 2
        if(l>=r) return;

        // get a random pivot
        int p = l + rand() % (r - l + 1);

        // swap pivot to first element in subarray
        swap(nums[l], nums[p]);
        int s = l, e = r;
        while(e>=s){
            if(nums[s]<=nums[l]){
                s++;
            }else{
                swap(nums[s], nums[e--]);
            }
        }

        swap(nums[l], nums[e]);

        quicksort(nums, l, e-1);
        quicksort(nums, e+1, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        
        quicksort(nums, 0, nums.size()-1);
        return nums;
    }
};