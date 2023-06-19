class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitude;
        altitude.push_back(0);
        for(int i=0;i<n;i++){
            int sum = altitude[i];
            sum = sum+gain[i];
            altitude.push_back(sum);
        }
        int maxi;
        maxi = *max_element(altitude.begin(), altitude.end());
        return maxi;
    }
};
