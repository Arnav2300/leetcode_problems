/*
Runtime: 4 ms, faster than 73.69% of C++ online submissions for Generate Parentheses.
Memory Usage: 15.9 MB, less than 14.24% of C++ online submissions for Generate Parentheses.
*/

class Solution {
public:
    vector<string>ans;
    void generate(string s,int open,int close){
        if(open==0&&close==0)
            ans.push_back(s);
        if(open>0){
            s.push_back('(');
            generate(s,open-1,close);
            s.pop_back();
        }
        if(close>0){
            if(open<close){
                s.push_back(')');
                generate(s,open,close-1);
                s.pop_back();
            }
        }
        
    }
    vector<string> generateParenthesis(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        string s="";
        generate(s,n,n);
        return ans;
        
    }
};
