class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int lcs = 1, min = INT_MAX, curr = 1;
        unordered_set<int> s;
        for(int num: nums){
            s.insert(num);
        }
        for(int num: nums){
            int next = num, prev = num;
            curr = 1;
            while(s.contains(++next)){
                s.erase(next);
                curr++;
            }
            while(s.contains(--prev)){
                s.erase(prev);
                curr++;
            }
            s.erase(num);
            lcs = max(lcs, curr);

        }
        
        return lcs;
    }
};
