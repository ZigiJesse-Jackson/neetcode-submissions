class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()<=1)return;
        int size = s.size()%2 == 0 ? (s.size()/2)-1:s.size()/2;
        for(int i =0;i<=size;i++){
            swap(s[i], s[(s.size()-1)-i]);
        }

    }
};