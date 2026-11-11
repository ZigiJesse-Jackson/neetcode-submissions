class TimeMap {
    unordered_map<string, vector<pair<string, int>>> mapped;
public:
    TimeMap() {
    }

    void set(string key, string value, int timestamp) {
        mapped[key].emplace_back(pair<string, int>(value, timestamp));
    }
    
    string get(string key, int timestamp) {
        if(mapped.count(key)==0) return "";

        int l = 0, r = mapped[key].size()-1, mid;

        if(mapped[key][r].second <= timestamp) return mapped[key][r].first;
        if(mapped[key][l].second > timestamp) return "";
        string res = "";
        while(l<=r){
            mid = l+((r-l)/2);
            if(mapped[key][mid].second == timestamp) return mapped[key][mid].first;
            if(mapped[key][mid].second < timestamp){
                res = mapped[key][mid].first;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return res;
    }
};