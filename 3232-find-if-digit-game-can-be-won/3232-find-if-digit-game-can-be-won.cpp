class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int ssum = 0, dsum = 0;
        for(int i =0; i<n; i++){
            if(nums[i]<10){
                ssum += nums[i];
            }
            else
                dsum += nums[i];
        }
        if(ssum==dsum)
            return false;
        
        return true;
    }
};