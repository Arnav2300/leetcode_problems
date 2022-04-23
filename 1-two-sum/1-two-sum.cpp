class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){
                ans.emplace_back(i);
                ans.emplace_back(m[target-nums[i]]);
                return ans;
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};