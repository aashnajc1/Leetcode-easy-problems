class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        long long concat = 0;
        for(int i=0;i<n/2;i++){
            string res;
            res = to_string(nums[i]) + to_string(nums[n-i-1]);
            int concatnum = stoi(res);
            concat = concat + concatnum;
        }
        if(n%2!=0){
            concat = concat + nums[n/2];
        }
        return concat;
    }
};
