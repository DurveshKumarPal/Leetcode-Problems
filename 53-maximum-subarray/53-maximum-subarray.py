class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxSum = -1e8
        currSum = 0
        for i in range(0, len(nums)):
            currSum = currSum + nums[i]
            if(currSum > maxSum):
                maxSum = currSum
            if(currSum < 0):
                currSum = 0
                         
        return maxSum