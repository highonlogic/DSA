class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long orig = x;
        long sum = 0, rev = 0;
        while(x!=0){
            rev = x%10;
            sum = sum*10 + rev;
            x = x/10;
        }
        if(orig==sum)
            return true;

        return false;
    }
};