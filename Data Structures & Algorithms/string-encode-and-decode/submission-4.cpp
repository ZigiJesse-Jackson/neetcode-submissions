class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i=0;i<strs.size();i++){
            string str = strs[i];
            res+= to_string(str.size())+str+"#";
        }
        cout<<res<<endl;
        return res;
    }

    vector<string> decode(string s) {
        int last_idx = 0;
        vector<string> res;
        for(int i=0; i<s.size();i++){
            if(s[i]=='#'){
                int len = i-last_idx;
                int j = last_idx; 
                while(j<i){
                    string potStr = s.substr(last_idx, (j-last_idx)+1);
                    if(potStr=="" ) break; 
                    int pLen = stoi(potStr);
                    len--;
                    if(pLen == len ){
                        res.emplace_back(s.substr(j+1, len));
                        last_idx = i+1;
                        break;
                    }
                    j++;
                }
            }
        }
        return res;
    }
};
