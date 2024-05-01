class Solution {
public:
    int solve(int &n){
        int ans = 0;
        while(n > 0){
            int digit = n % 10;
            ans += digit;
            n = n / 10;
        }
        return ans;
    }

    int differenceOfSum(vector<int>& nums) {
        int eSum = 0;
        int dSum = 0;
        for(auto it:nums){
            eSum += it;
            dSum += solve(it);
        }
        return abs(eSum - dSum);
    }
};