class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int curr_max=nums[0];
        int abs_max=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_max=max(nums[i],curr_max+nums[i]);
            abs_max=max(curr_max,abs_max);
        }
        return abs_max;
    }
};