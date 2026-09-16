class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n = nums.size();
        int gsum = 0;
        for(int i =0; i<n; i++){
            bool isValid = true;
           if(i-k>=0){
            if(nums[i]<=nums[i-k]){
                isValid = false;
             }
           }
           if(i+k<n){
            if(nums[i]<=nums[i+k]){
                isValid = false;
                }
           }
           if(isValid){
            gsum += nums[i];
           }
        }
        return gsum;
    }
};