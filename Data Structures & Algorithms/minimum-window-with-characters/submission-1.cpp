class Solution {

public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";

        unordered_map<char, int> map_t;
        unordered_map<char, int> map_s;

        pair<int, int> res{-1, INT_MAX};
        int need = 0;
        // perform freq count over t
        for(const char& c: t){
            if(map_t.count(c)==0){
                map_t[c] = 0;
            }
            map_t[c]++;
        }
        need = map_t.size();
        int have = 0;

        int l = 0;
        // sliding window over s
        for(int r = 0; r<s.size(); r++){
            if(map_t.count(s[r])>0){
                if(map_s.count(s[r])==0){
                    map_s[s[r]] = 0;
                }
                map_s[s[r]]++;
                if(map_s[s[r]]==map_t[s[r]]) have++;
            }

            while(have == need){
                res = res.second > (r-l)+1? pair<int,int>{l, (r-l)+1}: res;
                if(map_t.count(s[l])){
                    map_s[s[l]]--;
                    if(map_t[s[l]]>map_s[s[l]]) have--;
                }
                l++;
            }
        }
        
        return res.first<0? "" : s.substr(res.first, res.second);
    }
};
