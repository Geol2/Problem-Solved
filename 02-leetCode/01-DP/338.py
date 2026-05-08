class Solution(object):
    # O(n)
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        dp = [0] * (n + 1)
        sub = 1
        for i in range(1, n + 1):
            if sub * 2 == i:
                sub = i
            dp[i] = dp[i - sub] + 1
        return dp

    # O(n^2)
    def countBitsVer2(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        result= []
        arr = []
        for i in range(n + 1):
            row = []
            target = i
            while target % 2 <= 1:
                row.insert(0, target % 2)
                target = target // 2
                if target < 1:
                    break
                
            arr.append(row)
            result.append(sum(row))
        return result


solution = Solution()
result = solution.countBits(5)
print(result)