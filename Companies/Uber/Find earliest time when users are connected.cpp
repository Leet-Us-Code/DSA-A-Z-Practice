/**
Problem:
We were given logs in the format timestamp-UserA-UserB, meaning UserA and UserB share a cab.

Version 1: For each log, return how many cabs are currently running.
Version 2: For a given logs , return the timestamp when all users get into one cab.
*/

// Hari's solution - using DSU Union Find

#include <bits/stdc++.h>
using namespace std;

class UnionFind {
private: 
    vector<int> parent; 
    vector<int> size; 
    int nodeCount = 0; 

public: 
    UnionFind(int N) {
        nodeCount = N; 
        size.resize(N,1); 
        parent.resize(N); 
        
        for (int i = 0; i<N; i++) {
            parent[i] = i; 
        }
    }
    
    bool isAllConnected() {
        for (auto it: size) {
            if (it == nodeCount) return true; 
        }
        
        return false; 
    }
    
    int findTopParent(int node) {
        if (parent[node] == node) {
            return node; 
        }
        return parent[node] = findTopParent(parent[node]); // normalize 
    }
    
    void unionBySize(int n1, int n2) {
        int n1Parent = findTopParent(n1); 
        int n2Parent = findTopParent(n2); 
        
        if (n1Parent == n2Parent) {
            return; 
        }
        
        if (size[n1Parent] > size[n2Parent]) {
            parent[n2Parent] = n1Parent;
            size[n1Parent] += size[n2Parent]; 
        } else {
            parent[n1Parent] = n2Parent;
            size[n2Parent] += size[n1Parent];     
        }
        
        return; 
    }
}; 

class Solution {
public:
    int earliestTime(int N, vector<string> &inputs) {
        unordered_map<string, int> nameKeyMap; 
        int count = 0; 
        vector<vector<string>> parsed;
        
        for (int i = 0; i<N; i++) {
            string &curr = inputs[i]; 
            // assume string is {timestamp}-{UserA}-{UserB}
            vector<string> input; 
            string token; 
            
            stringstream ss(curr); 
            while(getline(ss, token, '-')) {
                input.push_back(token); 
            }
            
            if (input.size() != 3) {
                continue;
            }
            
            parsed.push_back(input); 
            
            // input -> ["timestamp", "UserA", "UserB"] 
            
            // build name - key mapping if not exist for name 
            if (nameKeyMap.find(input[1]) == nameKeyMap.end()) {
                nameKeyMap[input[1]] = count++; 
            }
            if (nameKeyMap.find(input[2]) == nameKeyMap.end()) {
                nameKeyMap[input[2]] = count++; 
            }
        }
        
        UnionFind* uf = new UnionFind(count); 
        
        for (auto &it: parsed) {
            // union the keys 
            uf->unionBySize(nameKeyMap[it[1]], nameKeyMap[it[2]]); 
            
            // check if isAllConnected
            if (uf->isAllConnected()) {
                delete uf; 
                uf = nullptr; 
                return stoi(it[0]); // timestamp 
            }
        }
        
        delete uf; 
        uf = nullptr;         
        return -1; 
    }
};

int main() {
    Solution s; 
    int N = 0; 
    cout << "Enter no of users: " << endl;
    cin >> N; 

    vector<string> inputs(N);

    for (int i = 0; i < N; i++) {
        cout << "Enter log entry: " << endl;
        string s; 
        cin >> s; 
        inputs[i] = s; 
    }
     
    int result = s.earliestTime(N, inputs);
    cout << "Earliest time stamp is: " << result << endl;
    
    return 0;
}
