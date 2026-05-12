class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_profit = 0
        curr_profit = 0
        
        for i in range(1, len(prices)):
            diff = prices[i] - prices[i-1]
            curr_profit = max(curr_profit + diff, 0)
            max_profit = max(max_profit, curr_profit)
        return max_profit

sol = Solution().maxProfit([7,6,4,3,1])
print(sol)