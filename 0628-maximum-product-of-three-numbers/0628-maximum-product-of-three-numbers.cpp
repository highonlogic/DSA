class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend());
        /*int mult = 1;
        if(nums[n-1] < 0 && nums[n-2]<0 && nums[0]>0){
            mult = nums[0]* nums[n-1]*nums[n-2];
        }
        else{
        for(int i =0; i<3; i++){
            mult*=nums[i] ;
        }
        }
        return mult;*/
        int c1 = nums[0]*nums[1]*nums[2];
        int c2 = nums[0]*nums[n-2]*nums[n-1];

        return max(c1,c2);

    }
};