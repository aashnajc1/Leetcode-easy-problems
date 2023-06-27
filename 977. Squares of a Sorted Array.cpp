class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int prod;
            prod = nums[i] * nums[i];
            result.push_back(prod);
        }
        sort(result.begin(),result.end());
        return result;
    }
};
