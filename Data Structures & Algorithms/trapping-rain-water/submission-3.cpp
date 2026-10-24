class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==1) return 0;
        vector<int> trapped(height.size(), 0);

        int l = 0, r = l+1, end = height.size();
        while(r<end){
            if(height[l]>height[r]){
                trapped[r] = height[l]-height[r];
            }else{
                l = r;
            }
            r++;
        }
        // cout<<"Size of height array: "<<end<<endl;
        // cout<<"R idx: "<<r<<endl;
        // cout<<"L idx: "<<l<<endl;
        // while(l<r){
        //     if(height[r-1]>=height[r]){
        //         trapped[r] = 0;
        //     }
        //     r--;
        // }
        r = end-1;
        l = r-1;
        while(l>=0){
            if(height[r]>height[l]){
                trapped[l] = min(height[r]-height[l], trapped[l]);
            }else{
                trapped[r] = 0;
                r = l;
            }
            l--;
        }

        return accumulate(trapped.begin(), trapped.end(), 0);
    }
};
