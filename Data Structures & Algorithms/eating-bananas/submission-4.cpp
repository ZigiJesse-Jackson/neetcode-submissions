class Solution {

    long long hoursToEat(const vector<int>& piles, int rate){
        long long res = 0;
        int idx = 0;

        while(idx<piles.size()){
            res+=ceil(static_cast<double>(piles[idx++])/rate );
        }

        return res;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    
        int l = 1, r = *max_element(piles.begin(), piles.end()), m;
        int res = -1;
        while(l<=r){
            m = l+((r-l)/2);
            long long hours = hoursToEat(piles, m);

            if(hours>h){
                l = m+1;
            }else{
                res = m;
                r = m-1;
            }
        }

        return res;
    }
};
