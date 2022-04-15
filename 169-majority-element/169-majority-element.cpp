class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int count=0,candidate=0;
        for(auto i:nums){
            if(count==0)candidate=i;
            if(i==candidate)count++;
            else count--;
            
        }
        
        return candidate;
    }
};