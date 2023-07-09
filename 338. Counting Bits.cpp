class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> binary;
        for(int i=0;i<=n;i++){
            binary.push_back(__builtin_popcount(i));
        }
        return binary;
    }
};
