class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int> result;
        for (int i = 1; i < nums.size(); i++) {
            for (int val = nums[i - 1] + 1; val < nums[i]; val++) {
                result.push_back(val);
            }
        }
        return result;
    }
};