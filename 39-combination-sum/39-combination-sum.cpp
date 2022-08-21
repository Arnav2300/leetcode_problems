class Solution {
public:
    void func(vector<int>arr, int target,vector<vector<int>>&ans,vector<int>&v,int pos){
        if(pos==arr.size()&&target==0){
            ans.push_back(v);
            return;
        }
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(pos==arr.size())
            return;
        if(arr[pos]<=target){
            v.push_back(arr[pos]);
            func(arr,target-arr[pos],ans,v,pos);
            v.pop_back();
        }
        func(arr,target,ans,v,pos+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //int sum=0;
        vector<vector<int>>ans;
        vector<int>v;
        func(candidates,target,ans,v,0);
        return ans;
    }
};