/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Generate Parentheses.
Memory Usage: 14 MB, less than 29.80% of C++ online submissions for Generate Parentheses.
*/

class Solution {
public:
    vector<string>ans;
    void generate(string s,int n,int open,int close,int i){
        if(i==2*n)
            ans.push_back(s);
        if(open<n){
            //s.push_back('(');
            generate(s+'(',n,open+1,close,i+1);
        }
        if(close<open){
            generate(s+')',n,open,close+1,i+1);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        string s="";
        generate(s,n,0,0,0);
        return ans;
        
    }
};
