class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        dest = len(cost)
        dp = [0] * (dest + 1)

        for i in range(2, dest + 1):
            dp[i] = min(dp[i-1] + cost[i-1], dp[i-2] + cost[i-2])

        return dp[dest]

sol = Solution().minCostClimbingStairs([10, 15, 20])
print(sol)