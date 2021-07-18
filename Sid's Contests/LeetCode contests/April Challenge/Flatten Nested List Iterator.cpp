/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    list<int> l;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(int i = 0; i < nestedList.size(); i++)
        {
            if(nestedList[i].isInteger())
            {
                l.push_back(nestedList[i].getInteger());
            }
            else 
            {
                vector<NestedInteger> x = nestedList[i].getList();
                NestedIterator* temp = new NestedIterator(x);
                while(temp->hasNext())
                {
                    l.push_back(temp->next());
                }
            }
        }
    }
    
    int next() {
        int x = l.front();
        l.pop_front();
        return x;
    }
    
    bool hasNext() {
        if(l.empty())
            return false;
        else
            return true;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
