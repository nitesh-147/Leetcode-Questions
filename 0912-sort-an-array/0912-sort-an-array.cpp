class Solution {
public:

    void merge(vector<int>& nums,int l,int m,int u){
        int i=l,k=l,j=m+1;
        int b[u+1];
        
        while(i<=m && j<=u){
            if(nums[i]<nums[j])
                b[k++]=nums[i++];
            else
                b[k++]=nums[j++];
        }
        while(i<=m){
            b[k++]=nums[i++];
        }
        while(j<=u){
            b[k++]=nums[j++];
        }
        for(int i=l;i<=u;i++){
            nums[i]=b[i];
        }
    }
    void mergesort(vector<int>& nums,int l,int u){
       if(l<u){
           int m=(l+u)/2;
           mergesort(nums,l,m);
           mergesort(nums,m+1,u);
           merge(nums,l,m,u);
       }
    }
    vector<int> sortArray(vector<int>& nums) {
        int l=0,u=nums.size()-1;
        mergesort(nums,l,u);
        
        return nums;
    }
};