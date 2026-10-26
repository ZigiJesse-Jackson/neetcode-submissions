class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1) return s.size();
        unordered_set<char> hset;
        int l = 0, end = s.size(), longest = 0;
        for(int i=0; i<end;i++){
            if(hset.contains(s[i])){
                longest = max(longest, i-l);
                while(hset.contains(s[i])){
                    hset.erase(s[l++]);
                }
            }
            hset.insert(s[i]);
        }
        longest = max(longest, end-l);

        return longest;
        
    }
};
