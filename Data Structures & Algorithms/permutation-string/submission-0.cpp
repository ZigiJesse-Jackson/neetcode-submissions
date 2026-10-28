class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(const char &c: s1){
            if(m1.count(c)==0){
                m1[c] = 0;
            }
            m1[c]++;
        }

        int l = 0, end1 = s1.size(), end2 = s2.size();
        for(int i = 0; i<end2;i++){
            
            if(m2.count(s2[i])==0){
                m2[s2[i]] = 0;
            }
            m2[s2[i]]++;
            
            if(m1.size()==m2.size()){
                auto curr2 = m2.begin();
                bool isPermutation = true;
                while(curr2!=m2.end()){
                    if(m1.count(curr2->first) == 0 || m1[curr2->first] != curr2->second){
                        isPermutation = false;
                        break;
                    }
                    curr2++;
                }
                if(isPermutation) return true;
            }
            if((i-l)+1==end1){
                m2[s2[l]]--;
                if(m2[s2[l]]==0) m2.erase(s2[l]);
                l++;
            }
        }

        return false;
    }
};
