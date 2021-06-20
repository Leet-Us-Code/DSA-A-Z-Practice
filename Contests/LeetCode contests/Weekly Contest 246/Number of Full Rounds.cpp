class Solution {
public:
    int numberOfRounds(string s, string f) {
        int start = 60 * stoi(s.substr(0, 2)) + stoi(s.substr(3)), finish = 60 stoi(f.substr(0, 2)) + stoi(f.substr(3));
        if (start > finish) 
            finish += 60 * 24; 
        return max(0, finish / 15 - (start + 14) / 15);
    }
};
