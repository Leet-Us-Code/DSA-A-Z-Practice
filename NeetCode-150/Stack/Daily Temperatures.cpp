// Hari

vector<int> dailyTemperatures(vector<int>& temperatures) {
    // fast
    ios_base::sync_with_stdio(false);
    
    int N = temperatures.size();
    stack<int> st; 
    vector<int> res(N, 0);
    
    for (int i = 0; i<N; i++) {
        if (st.empty() || (!st.empty() && st.top() >= temperatures[i])) {
            // monotonic decreasing stack (not strictly dec)
            st.push(temperatures[i]);
        } else {
            // st.top() < temperatures[i]
            int idx = 1;
            while (!st.empty() && st.top() < temperatures[i]) {
                while (res[i - idx] != 0) idx++; 
                res[i-idx] = idx;
                st.pop();
                idx++;
            }
            st.push(temperatures[i]);
        }
    }
    
    return res;
}
