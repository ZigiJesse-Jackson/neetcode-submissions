class MyHashSet {
    vector<bool> vec;
public:
    MyHashSet() {
        vec = vector<bool>(10, false);
    }
    
    void add(int key) {
        if(key>=vec.size()){
            vec.resize(key+1, false);
        }
        vec[key] = true;
    }
    
    void remove(int key) {
        if(key>=vec.size()){
            return;
        }
        vec[key] = false;
    }
    
    bool contains(int key) {
        if(key>=vec.size()) return false;
        return vec[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */