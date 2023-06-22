class Solution {
public:
int firstoc(vector<int>& arr,int n,int key)
{
    int ans=-1;
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastoc(vector<int>& arr,int n,int key)
{
    int ans=-1;
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstoc(nums,nums.size(),target));
        ans.push_back(lastoc(nums,nums.size(),target));
        return ans;
    }
};