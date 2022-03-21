class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<int>>ans;
        ans.push_back({1});//num of rows is atleast 1 (given constraint)
        for(int i=1;i<numRows;i++){
            vector<int>r(i+1,0);
            //assuming there will be even elements in row pointers will be pointing at positions 1 away from centre
            int left_ptr=((i+1)/2)-1;
            int right_ptr=left_ptr+1;
            //if elements in row are odd pointer will be pointing at centre, i.e. same position
            if(r.size()%2)left_ptr+=1,right_ptr=left_ptr;
            r[0]=1;//leftmost value
            r[r.size()-1]=1;//rightmost value
            while(r[left_ptr]!=1&&r[right_ptr]!=1){//condition for pointers to remain in bounds
                int t=ans[i-1][left_ptr-1]+ans[i-1][left_ptr];//calculation part
                //mirroring values at mirrored positions
                r[left_ptr--]=t;
                r[right_ptr++]=t;
            }
            //pushing back the row generated in the answer vector
            ans.push_back(r);
        }
        return ans;
    }
};