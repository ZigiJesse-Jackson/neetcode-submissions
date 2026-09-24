class MyHashSet {
    vector<int> vec;
public:
    MyHashSet() {
        vec = vector<int>(10, -1);
    }
    
    void add(int key) {
        if(key>=vec.size()){
            vec.resize(key+1, -1);
        }
        vec[key] = key;
    }
    
    void remove(int key) {
        if(key>=vec.size()){
            return;
        }
        vec[key] = -1;
    }
    
    bool contains(int key) {
        if(key>=vec.size()) return false;
        return vec[key] == key;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */