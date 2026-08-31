class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int max = nums[n-1];
        int gcd =0;
        for(int i = 1; i<=nums[n-1]; i++){
            if(min%i == 0 && max%i == 0)
                gcd = i;
        }
        return gcd;
    }
};