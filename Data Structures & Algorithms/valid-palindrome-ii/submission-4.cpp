class Solution {
    
    bool isPalindrome(const string& s){
        if(s.size()<=1) return true;
        int i = 0, j = s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        if(s.size()<=2) return true;
        int i=0,j=s.size()-1;
       while(i<j){
            if(s[i]!=s[j]){
                return isPalindrome(s.substr(i+1, (j-i))) || isPalindrome(s.substr(i, (j-i)));
            }
            i++;
            j--;
       }
       return true;
    }
};