class Solution(object):
    cache = {}
    def fib(self, n): # 18ms
        if n in self.cache:
                return self.cache[n]
        if n <= 1:
            return n
        self.cache[n] = self.fib(n-1)+self.fib(n-2)

        return self.cache[n]

# class Solution(object): # 625ms
#     def fib(self, n):
#         """
#         :type n: int
#         :rtype: int
#         """
#         if n <= 1:
#             return n
#         a = self.fib(n - 1) + self.fib(n - 2)
        
#         return a

sol = Solution().fib(5)
print(sol)