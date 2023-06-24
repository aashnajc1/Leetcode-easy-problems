class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int> intersection;
      sort(nums1.begin(), nums1.end());
      sort(nums2.begin(), nums2.end()); 
      int n = nums1.size();
      int m = nums2.size();
      int i = 0;
      int j = 0;

      while(i<n && j<m){
          if(i>0 && nums1[i] == nums1[i-1]){
              i++;
              continue;
          }
          if(nums1[i] == nums2[j]){
              intersection.push_back(nums1[i]);
              i++;
              j++;
          }
          else if(nums1[i] > nums2[j]){
              j++;
          }
          else{
              i++;
          }
      }
      return intersection;
    }
};
