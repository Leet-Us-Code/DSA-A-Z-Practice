// Hari

// Mathematical way - TC: O(N), SC: O(1). Use ll to avoid overflows
// Other way is just using freq. array but that is O(N), O(N)

#define ll long long
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // fast
    //ios_base::sync_with_stdio(false);
    ll N = A.size();
    vector<int> res;
    // we need sum and square sum for both A and normal array from 1..N
    
    // for normal array
    ll sum = (N*(N+1)) / 2;
    ll sqSum = (N*(N+1)*((2*N) + 1)) / 6;
    
    // for A array which has 1 missing and 1 repeating element
    ll ASum = 0, ASqSum = 0;
    for(auto it: A){
        ASum += it;
        ASqSum += (ll) ((ll) it) * it;
    }
    
    // [w,x,y,z] - [w,y,y,z] = x - y ie. missing - repeating -> diff1
    // [w2,x2,y2,z2] - [w2,y2,y2,z2] = x^2 - y^2 ie. missing^2 - repeating^2 -> diff2
    
    ll diff1 = sum - ASum;
    ll diff2 = sqSum - ASqSum;
    
    // WKT x^2 - y^2 = (x + y) * (x - y)
    // diff2 = (missing + repeating) * diff1
    // WKT diff1 = missing - repeating
    
    ll misPlusRep = (ll) diff2 / diff1; 
    ll misMinusRep = diff1;
    
    ll missing = (misPlusRep + misMinusRep) / 2;
    ll repeating = (misPlusRep - misMinusRep) / 2;
    
    // res has {repeating, missing}
    res.push_back((int)repeating);
    res.push_back((int)missing);
    
    return res;
    
}
