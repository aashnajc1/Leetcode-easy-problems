class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int number = nums.size()-k;
        return nums[number];
    }
};
