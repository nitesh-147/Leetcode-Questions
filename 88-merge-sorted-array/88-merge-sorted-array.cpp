class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=nums1.size()-nums2.size();
        for(int i=0;i<nums2.size();i++){
            swap(nums1[j++],nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
    }
};