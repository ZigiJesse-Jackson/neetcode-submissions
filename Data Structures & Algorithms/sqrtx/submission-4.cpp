class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x, m = 0, res = 0;

        while(l<=r){
            m = l+((r-l)/2);
            long long sqrM = 1LL*m*m;
            if( sqrM == x) return m;
            else if(sqrM>x){
                r = m-1;
            }else{
                l = m+1;
                res = m; 
            }
        }

        return res;
    }
};