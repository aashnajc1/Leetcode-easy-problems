class Solution {
public:
    int mySqrt(int x) {
        int start = 1,end = x;
        while(start<=end){
            long mid = start + (end-start)/2;
            if(mid*mid==x){
                return round(mid);
            }
            else if(mid*mid<x){
                start = mid + 1;
            }
            else if(mid*mid>x){
                end = mid-1;
            }
        }
        if(end*end==x){
            return round(end);
        }
        return int(start-1);
    }
};
