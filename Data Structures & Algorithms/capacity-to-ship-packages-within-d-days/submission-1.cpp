class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 1, r = accumulate(weights.begin(), weights.end(), 0), capacity = 0, m;

        while(l<=r){
            m = l+((r-l)/2);

            int d2c = 1, carrying = 0;
            for(int i = 0; i<weights.size();i++){
                if(weights[i]>m){
                    d2c = days+1;
                    break;
                }
                carrying+=weights[i];
                if(carrying> m){
                    d2c++;
                    carrying = weights[i];
                }
            }

            if(d2c>days){
                l = m+1;
            }else{
                capacity = m;
                r = m-1;
            }
        }

        return capacity;
    }
};