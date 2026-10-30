class Solution {

    int mid(const int& l, const int& r){
        return l+((r-l)/2);
    }

    int close_to(const int& x1, const int& x2){
        return abs(x1-x2);
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(arr.size()<=k) return arr;

        // find closest point 
        int l = 0, r = arr.size()-1;
        
        while(l<r){
            int m = mid(l, r);
            if(arr[m]==x){
                l = m;
                break;
            }
            if(arr[m]<x){
                l = m+1;
            }else{
                r = m;
            }
        }

        // find k closest
        l--;
        r = l+1;
        if(r>=arr.size()) return std::vector<int>(arr.begin()+(arr.size()-k), arr.end());
        if(l<0) return std::vector<int>(arr.begin(), arr.begin()+k);
        while((r-l-1)<k){
            if(r>=arr.size()){
                l--;
                continue;
            }
            if(l<0){
                r++;
                continue;
            }
            if(close_to(arr[l], x)<=close_to(arr[r], x)){
                l--;
            }else{
                r++;
            }
        }

        return vector<int>(arr.begin()+l+1, arr.begin()+r);

    }
};