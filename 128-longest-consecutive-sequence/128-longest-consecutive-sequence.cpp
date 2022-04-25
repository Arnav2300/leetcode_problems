class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        set<int>s;
        for(auto i:nums)s.insert(i);
        int ans=0;
        for(auto i:nums){
            if(!s.count(i-1)){
                int curr=i;
                int currAns=1;
                while(s.count(curr+1)){
                    curr+=1;
                    currAns+=1;
                }
                ans=max(ans,currAns);
            }
            
        }
        return ans;
    }
};