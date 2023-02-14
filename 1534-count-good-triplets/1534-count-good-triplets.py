class Solution:
    def countGoodTriplets(self, nums: List[int], a: int, b: int, c: int) -> int:
        ans=0;
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                for k in range(j+1,len(nums)):
                    if abs(nums[i]-nums[j])<=a and abs(nums[j]-nums[k])<=b and abs(nums[k]-nums[i])<=c:
                        ans+=1;
        return ans;