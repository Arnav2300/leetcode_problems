/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Sum of Four Digit Number After Splitting Digits.
Memory Usage: 6 MB, less than 28.59% of C++ online submissions for Minimum Sum of Four Digit Number After Splitting Digits.
*/

class Solution {
public:
    int minimumSum(int num){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int a[4];
        a[0]=num%10;
        num/=10;
        a[1]=num%10;
        num/=10;
        a[2]=num%10;
        num/=10;
        a[3]=num;
        sort(a,a+4);
        return (a[0]*10+a[2])+(a[1]*10+a[3]);
        
    }
};
