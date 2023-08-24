class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int aage = nums[1]*nums[0];
        int peche = nums[n-1]*nums[n-2];
        int res = peche - aage;
        return res;
    }
};
