class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        string res = "";

        while(i<word1.size() || i<word2.size()){
            if(i>=word1.size()){
                res+=word2.substr(i);
                return res;
            }
            if(i>=word2.size()){
                res+=word1.substr(i);
                return res;
            }
            res.push_back(word1[i]);
            res.push_back(word2[i]);
            i++;

        }

        return res;
    }
};