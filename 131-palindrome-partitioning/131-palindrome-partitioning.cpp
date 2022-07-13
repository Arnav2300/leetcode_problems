class Solution {
public:
    bool palindrome(string s,int strt,int end){
        while(strt<=end){
            if(s[strt++]!=s[end--])
                return false;
        }
        return true;
    }
    void func(int index,vector<vector<string>> &ans,vector<string> &part,string s){
        if(index==s.size()){
            ans.push_back(part);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(palindrome(s,index,i)){
                part.push_back(s.substr(index,i-index+1));
                func(i+1,ans,part,s);
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<string>>ans;
        vector<string>part;
        func(0,ans,part,s);
        return ans;
    }
    
};