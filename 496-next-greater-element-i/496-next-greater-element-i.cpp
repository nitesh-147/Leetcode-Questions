class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            bool ch=false;
            int nxt=-1;
            for(int j=0;j<nums2.size();j++){
                if(ch&&nums2[j]>nums1[i])
                {
                    nxt=nums2[j];
                    break;
                }
                if(nums2[j]==nums1[i])
                    ch=true;
            }
            nums1[i]=nxt;
            
        }
        return nums1;
    }
};