// Hari

int Solution::solve(vector<int> &A) {
    unordered_map<int, int> map;
    for(int i = 0; i<A.size(); i++){
        map[A[i]]++;
    }
    for(int i = 0; i<A.size(); i++){
        if(map[A[i]] > 1) return A[i];
    }
    return -1;
}
