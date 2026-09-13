class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int eles = 0, digs=0;
        for(int i=0;i<n;i++){
            int x = nums[i];
            eles += nums[i];
            while(x>0){
                int t = x%10;
                digs += t;
                x = x/10;
            }
        }
        if(digs<eles)
           return eles-digs;

        else
            return digs-eles;
    }
};