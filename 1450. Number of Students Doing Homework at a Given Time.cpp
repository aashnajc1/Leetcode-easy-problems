class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        int n = endTime.size();
        for(int i=0;i<n;i++){
            if(startTime[i] <= queryTime && endTime[i] >= queryTime){
                count++;
            }
        }
        return count;
    }
};
