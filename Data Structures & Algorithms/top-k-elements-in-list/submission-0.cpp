class Solution {
public:
    
    void freqCount(unordered_map<int, int>& map, const vector<int>& nums){
        for(const int& num: nums){
            if(map.count(num)==0){
                map[num] = 0;
            }
            map[num]++;
        }
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        auto comp = [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second > b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int,int>>, decltype(comp)> pq(comp);
        unordered_map<int, int> map;
        freqCount(map, nums);
        for(pair<int, int> kv : map){
            pq.push(kv);
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().first);
            pq.pop();
        }
        return res;
    }
};
