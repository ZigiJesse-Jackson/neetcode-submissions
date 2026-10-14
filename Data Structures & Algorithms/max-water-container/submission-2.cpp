class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1, maxA = 0;
        while(l<r){
            int currH = heights[l]<heights[r]? heights[l]:heights[r];
            maxA = max(maxA, currH*(r-l));
            if(heights[l]>heights[r]){
                r--;
            }else l++;

        }

        return maxA;
    }
};
