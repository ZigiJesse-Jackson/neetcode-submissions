class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";

        for(int i = 0; ; i++){
            char curr = strs[0][i];
            for(string& str: strs){
                if(str.size()<=i) return lcp;
                if(str[i]!=curr) return lcp;
            }
            lcp.push_back(curr);
        }

        return lcp;
    }
};