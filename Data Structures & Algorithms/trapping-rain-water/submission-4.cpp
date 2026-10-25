class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()==1) return 0;
        
        int left_Max = height[0], right_Max = height[height.size()-1],
            l = 0, r = height.size()-1, res = 0;

        while(l<=r){
            if(left_Max<right_Max){
                res+= left_Max > height[l]? left_Max - height[l]:0;
                left_Max = max(left_Max, height[l]);
                l++;
            }
            else{
                res+= right_Max > height[r]? right_Max - height[r]:0;
                right_Max = max(right_Max, height[r]);
                r--;
            }
        }

        return res;
    }
};
