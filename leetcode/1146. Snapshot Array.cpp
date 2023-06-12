#include<bits/stdc++.h>
using namespace std;

class SnapshotArray {
public:
    int id;
    vector<vector<pair<int, int>>> vec;

    SnapshotArray(int length) {
        id = 0;
        vec.resize(length);
        for (int i=0; i<length; i++)
            vec[i].push_back(make_pair(0, 0));
    }
    
    void set(int index, int val) {
        vec[index].push_back(make_pair(id, val));
    }

    int snap() {
        return id++;
    }
    
    int get(int index, int snap_id) {
        auto it = upper_bound(vec[index].begin(), vec[index].end(), make_pair(snap_id, INT_MAX));
        return prev(it)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */