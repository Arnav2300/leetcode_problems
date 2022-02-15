/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Split a String in Balanced Strings.
Memory Usage: 6.2 MB, less than 80.13% of C++ online submissions for Split a String in Balanced Strings.
*/

class Solution {
public:
    int balancedStringSplit(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int cntR=0,cntL=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R') cntR++;
            else cntL++;
            if(cntR==cntL)res++,cntR=0,cntL=0;
        }
        return res;
    }
};
