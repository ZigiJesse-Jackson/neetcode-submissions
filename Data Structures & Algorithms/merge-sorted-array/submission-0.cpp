class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> res;
        while(i<m || j<n){
            if(i>=m){
                while(j<n){
                    res.push_back(nums2[j++]);
                }
                nums1 = res;
                return;
            }
            if(j>=n){
                while(i<m){
                    res.push_back(nums1[i++]);
                }
                nums1 = res;
                return ;
            }
            
            if(nums1[i]<=nums2[j]){
                res.push_back(nums1[i++]);
            }else{
                res.push_back(nums2[j++]);
            }
        }
        nums1 = res;
    }
};