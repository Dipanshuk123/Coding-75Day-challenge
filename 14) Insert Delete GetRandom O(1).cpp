class RandomizedSet {
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        if (m.count(val) != 0) return false;
        
        m[val] = size;
        v.push_back(val);
        size++;
        
        return true;
    }
    
    bool remove(int val) {
        if (m.count(val) == 0) return false;
        
        int idx = m[val];
        v[idx] = v[size - 1];
        v.pop_back();
        m[v[idx]] = idx;
        m.erase(val);
        size--;
        
        return true;
    }
    
    int getRandom() {
        return v[rand() % size];
    }
    
private:
    unordered_map<int, int> m;
    vector<int> v;
    int size = 0;
};