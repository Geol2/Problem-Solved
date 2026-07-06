class Solution(object):
    def removeCoveredIntervals(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        intervals.sort(key=lambda x: (x[0], -x[1]))
        count = 0
        max_end = float('-inf')
        for start, end in intervals:
            if end > max_end:
                count += 1
                max_end = end
        return count

sol = Solution()
print(sol.removeCoveredIntervals([[1, 4],[3, 6], [2, 8]]))
print(sol.removeCoveredIntervals([[1, 4], [2, 3]]))
print(sol.removeCoveredIntervals([[3,10],[4,10],[5,11]]))
print(sol.removeCoveredIntervals([[34335, 39239], [15875, 91969], [29673, 66453], [53548, 69161], [40618, 93111]]))
