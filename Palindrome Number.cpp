class Solution {
public:
    bool isPalindrome(int x) {
     long long int y=x;
        long long int t=0,s=0;
        while(x>0)
        {
            t=x%10;
            s=((10*s)+t);
            x/=10;
        }
        if(s==y)
            return true;
        else
            return false;
    }
};
