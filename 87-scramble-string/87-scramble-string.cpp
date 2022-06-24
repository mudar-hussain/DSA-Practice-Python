class Solution {
public:
    unordered_map<string, bool> um;
    bool isScramble(string s1, string s2) {
        string ss = s1 + "#" + s2;
        if(um.find(ss) != um.end())
            return um[ss];
        if(s1 == s2)
            return um[ss] = true;
        if(s1.length()<=1)
            return um[ss] = false;
        
        int n = s1.length();
        
        bool ans = false;
        for(int k = 1; k<n; k++){
            bool case1 =  isScramble(s1.substr(0, k), s2.substr(0, k)) && 
                        isScramble(s1.substr(k, n-k), s2.substr(k, n-k));
            bool case2 =  isScramble(s1.substr(0, k), s2.substr(n-k, k)) && 
                        isScramble(s1.substr(k, n-k), s2.substr(0, n-k));
                                
            if(case1 || case2){
                ans = true;
                break;
            }
        }
        
        return um[ss] = ans;
    }
};

// s -> i to j -> k = i to j
// 1) i   to k
// 2) k+1 to j

