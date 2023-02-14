class Solution:
    def unequalTriplets(self, nums: List[int]) -> int:
        ans=0;
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                for k in range(j+1,len(nums)):
                    if nums[k]!=nums[j] and nums[j]!=nums[i] and nums[i]!=nums[k]:
                        ans+=1;
        return ans;
        