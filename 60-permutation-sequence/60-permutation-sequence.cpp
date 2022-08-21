class Solution {
public:
    string getPermutation(int n, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int fact=1;
        vector<int>numbers;
        for(int i=1;i<n;i++){
            fact=fact*i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        string s="";
        k-=1;
        for(int i=0;i<n;i++){
            s=s+to_string(numbers[k/fact]);
            numbers.erase(numbers.begin()+k/fact);
            if(numbers.size()==0)break;
            k=k%fact;
            fact=fact/numbers.size();
        }
        return s;
    }
};