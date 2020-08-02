//Leetcode Day02 (Design HashSet)

class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<int> set;
    MyHashSet() {

    }

    void add(int key) {
        int flag=0;
        for(int i=0;i<set.size();i++)
        {
            if(set[i]==key)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            set.push_back(key);
    }

    void remove(int key) {
        int index=0,flag=0;
        for(int i=0;i<set.size();i++)
        {
            if(set[i]==key)
            {
                index=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
            set.erase(set.begin()+index);
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        for(int i=0;i<set.size();i++)
        {
            if(set[i]==key)
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
