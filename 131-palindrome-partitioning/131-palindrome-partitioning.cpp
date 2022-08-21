class Solution {
public:
    bool palindrome(string s,int i,int j){
        //if(s.length()==0)return false;
        while(i<=j){
            if(s[i++]!=s[j--])return false;
        }
        return true;
    }
    void func(string s, vector<vector<string>>&ans,int pos,vector<string>&v){
        if(pos==s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=pos;i<s.size();i++){
            if(palindrome(s,pos,i)){
                v.push_back(s.substr(pos,i-pos+1));
                func(s,ans,i+1,v);
                v.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<string>>ans;
        vector<string>v;
        func(s,ans,0,v);
        return ans;
        
    }
    
};