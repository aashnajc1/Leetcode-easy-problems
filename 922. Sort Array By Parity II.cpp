class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int even = 0;
        int odd = 1;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[even] = nums[i];
                if(even+2 <= nums.size()-1){
                    even+=2;
                }
            }
            else{
                ans[odd] = nums[i];
                if(odd+2 <= nums.size()-1){
                    odd+=2;
                }
            }
        }
        return ans;
    }
};
