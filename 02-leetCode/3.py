class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = {}   # 문자 → 마지막으로 본 인덱스
        left = 0
        result = 0

        for right, ch in enumerate(s):
            if ch in seen and seen[ch] >= left:
                left = seen[ch] + 1       # 중복 위치 바로 다음으로 점프
            seen[ch] = right
            result = max(result, right - left + 1)

        return result


s = input()
sol = Solution()
result = sol.lengthOfLongestSubstring(s)
print(result)