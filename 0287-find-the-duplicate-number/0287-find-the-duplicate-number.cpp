class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int ans;
        for(auto it:mpp){
            if(it.second > 1){
                ans = it.first;
            }
        }
        return ans;
    }
};