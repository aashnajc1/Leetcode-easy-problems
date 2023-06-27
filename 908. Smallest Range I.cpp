class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
       int maxi = *max_element(nums.begin(),nums.end());
       int mini = *min_element(nums.begin(),nums.end());
       int score = maxi - mini;
       if(score <= 2*k){
           return 0;
       }
       return score - 2*k;
    }
};
