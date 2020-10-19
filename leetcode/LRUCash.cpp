class LRUCache {
public:
    int capacity;
    set<pair<int,int>> st;
    unordered_map<int,pair<int,int>> hashtable;
    int time = 0;
    LRUCache(int _capacity) {
        capacity = _capacity;
        time = 0;
    }
    
    int get(int key) {
        if(hashtable.count(key)){
            st.erase({hashtable[key].second, key});
            st.insert({time,key});
            hashtable[key].second = time;
            time++;
            return hashtable[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {

        if(hashtable.size() == capacity && hashtable.count(key) == 0){
            int lru_key = st.begin()->second;
            st.erase(st.begin());
            hashtable.erase(lru_key);

        }
            if(hashtable.count(key)){
                st.erase({hashtable[key].second, key});
            }
            hashtable[key] = {value, time};
            st.insert({time, key});
            time++;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */


/*
    hashtable [key, {value, last_timeUsed}];
    set<last_time_used,key>
    
    get(){
        not found -1
        return value update st;
    }
    put {
        if full remove LRU
        update st
        insert new value 
        update st
    }

*/