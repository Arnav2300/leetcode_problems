/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.
Memory Usage: 6.9 MB, less than 12.80% of C++ online submissions for Letter Combinations of a Phone Number.
*/

class Solution {
public:
    unordered_map<int,string>s{
        {2,"abc"},
        {3,"def"},
        {4,"ghi"},
        {5,"jkl"},
        {6,"mno"},
        {7,"pqrs"},
        {8,"tuv"},
        {9,"wxyz"}
    };
    vector<string>ans;
    
    void solve(string digits,string curr_ans,int index){
        if(index==digits.length()){
            if(curr_ans!="")
                ans.push_back(curr_ans);
            return;
        }
        for(int i=0;i<s[digits[index]-'0'].length();i++)
            solve(digits,curr_ans+s[digits[index]-'0'][i],index+1);
    }
    
    vector<string> letterCombinations(string digits) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        solve(digits,"",0);
        return ans;
    }
};
