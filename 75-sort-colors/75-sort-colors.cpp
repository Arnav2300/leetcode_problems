class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int z=0,o=0,t=0;
        for(auto i:nums){
            if(i==0)z++;
            else if(i==1)o++;
            else t++;
        }
        for(int i=0;i<nums.size();i++){
            if(z)nums[i]=0,z--;
            else if(o)nums[i]=1,o--;
            else if(t)nums[i]=2,t--;
        }    
    }
};