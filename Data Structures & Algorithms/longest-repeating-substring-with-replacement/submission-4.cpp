class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()<=1) return s.size();
        int l = 0, r = 0, res = 0, most = 0, curr = 0;
        unordered_map<char, int> freq_count;

        for(;r<s.size();r++){
            if(freq_count.count(s[r])==0){
                freq_count[s[r]] = 0;
            }
            freq_count[s[r]]++;
            most = max(most, freq_count[s[r]]);
            curr = (r-l+1)-most;
            if( curr > k){
                freq_count[s[l]]--;
                if(freq_count[s[l]]==0) freq_count.erase(s[l]);
                l++;
            }
            
            res = max(res, r-l+1);
            
        }

        return res;


    }
};
