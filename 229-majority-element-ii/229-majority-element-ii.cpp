class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int c1=0,c2=0;
        int e1=INT_MAX,e2=INT_MAX;
        for(auto i:nums){
            if(e1==i)c1++;
            else if(e2==i)c2++;
            else if(c1==0)e1=i,c1=1;
            else if(c2==0)e2=i,c2=1;
            else c1--,c2--;
        }
        c1=c2=0;
        for(auto i:nums){
            if(i==e1)c1++;
            if(i==e2)c2++;
        }
        vector<int>ans;
        if(c1>nums.size()/3)
            ans.push_back(e1);
        if(c2>nums.size()/3)
            ans.push_back(e2);
        return ans;
    }
};