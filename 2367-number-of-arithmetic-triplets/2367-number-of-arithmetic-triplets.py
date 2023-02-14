class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        ans=0;
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                for k in range(j+1,len(nums)):
                    if nums[k]-nums[j]==diff and nums[j]-nums[i]==diff:
                        ans+=1;
        return ans;           