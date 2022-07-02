class Solution {
public:
    void f(int index,vector<vector<int>>&ans,vector<int>&nums){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            f(index+1,ans,nums);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>>ans;
        f(0,ans,nums);
        return ans;
    }
};