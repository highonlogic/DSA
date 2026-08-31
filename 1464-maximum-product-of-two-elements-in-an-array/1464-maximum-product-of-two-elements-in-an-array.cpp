class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int c1 = (nums[n-2]-1) * (nums[n-1]-1);
        int c2 = (nums[0]-1)*(nums[1]-1);

        return max(c1,c2);
    }
};