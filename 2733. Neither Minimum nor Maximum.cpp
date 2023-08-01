class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 1){
            return -1;
        }
        nums.pop_back();
        nums.erase(nums.begin());
        if(!nums.empty()){
            return nums[0];
        }
        return -1;
    }
};
