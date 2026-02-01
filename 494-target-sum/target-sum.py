class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        
        #rows -> idx , cols -> val
        #val can range from -sum(nums)[if all numbers we do -] to sum(nums)[if all numbers we do +]
        dp = [[-1 for _ in range(-sum(nums) , sum(nums)+1)] for _ in range(len(nums) + 1)]

        def solve(idx , val , nums , target ,dp):
            #base
            if idx >= len(nums):
                if target == val:
                   return 1
                else:
                    return 0

            #check
            if dp[idx][val] != -1:
                return dp[idx][val]

            #choice
            add = solve(idx + 1 , val + nums[idx] , nums , target ,dp)
            subtract =  solve(idx + 1 , val - nums[idx] , nums , target ,dp)

            dp[idx][val] =  add + subtract
            return dp[idx][val]

        return solve(0 , 0 , nums , target ,dp)
        