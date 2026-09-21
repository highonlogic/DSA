class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> perm(n);
        for(int i =0; i<n; i++){
         perm[i] = nums[nums[i]];
        }
        return perm;
    }
};