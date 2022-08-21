class Solution {
public:
    
    void func(vector<int>arr,int target,vector<vector<int>>&res,vector<int>&v,int pos){
        if(target==0){
            res.push_back(v);
            return;
        }
        for(int i=pos;i<arr.size();i++){
            if(i>pos && arr[i]==arr[i-1])continue;
            if(arr[i]>target)break;
            v.push_back(arr[i]);
            func(arr,target-arr[i],res,v,i+1);
            v.pop_back();
            
        }
        //func(arr,target,res,v,pos+1);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>a;
        func(candidates,target,res,a,0);
        
        return res;
    }
};