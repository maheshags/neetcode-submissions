class MyHashSet {
public:

    unordered_set<int>hmap;
    MyHashSet() {
        
    }
    
    void add(int key) {
        hmap.insert(key);
    }
    
    void remove(int key) {
        hmap.erase(key);
        
    }
    
    bool contains(int key) {
        if(hmap.count(key))return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */