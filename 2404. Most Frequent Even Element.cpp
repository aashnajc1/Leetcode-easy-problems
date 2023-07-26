class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1, ans = -1;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
                mp[nums[i]]++;
            }
        }
        for(auto it:mp){
            if(it.second > maxi){
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;  
    }
};
