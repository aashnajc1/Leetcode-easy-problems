class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0){
            return 0;
        }
        vector<int> :: iterator it = nums.begin();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(it);
                it--;
                i--;
            }
            it++;
        }
        return nums.size();
    }
};
