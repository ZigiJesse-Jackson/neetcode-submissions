class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> m;
        int threshold = nums.size()/3;

        for(int num: nums){
            if(m.count(num)<1){
                m[num] = 0;
            }
            m[num]++;
           
        }
        for(pair<int,int> p: m){
            if(m[p.first]>threshold){
                res.push_back(p.first);
            }
        }

        return res;
    }
};