class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend());
        
        int c1 = nums[0]*nums[1]*nums[2];
        int c2 = nums[0]*nums[n-2]*nums[n-1];

        return max(c1,c2);

    }
};