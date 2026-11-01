class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k>=nums.size()) return {*max_element(nums.begin(), nums.end())};
        map<int, int> freq_count; 
        vector<int> res{};
        int curr, last;
        for(int i = 0; i<nums.size();i++){
            curr = nums[i];
            if(freq_count.count(curr)==0){
                freq_count[curr]=0;
            }
            freq_count[curr]++;

            if(i-k+1>=0){
                res.push_back(freq_count.rbegin()->first);
                last = nums[i-k+1];
                freq_count[last]--;
                if(freq_count[last]==0) freq_count.erase(last);
            }
            
        }

        return res;        
    }
};
