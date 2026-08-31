class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;

        while(n>0){
            nums.push_back(n%10);
            n/=10;
        }
        sort(nums.begin(),nums.end());
        int z = nums.size();
        if(z>1){
            return nums[z-1]*nums[z-2];
        }
        return nums[z-1];
    }
};