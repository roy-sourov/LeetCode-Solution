##https://leetcode.com/problems/palindrome-removal/

class Solution:
    def minimumMoves(self, A):
        @lru_cache(None)
        def dp(i, j):
            if i > j: return 0
            return min(dp(i, k - 1) + (dp(k + 1, j - 1) if k < j - 1 else 1) for k in range(i, j + 1) if A[k] == A[j])
        return dp(0, len(A) - 1)
        
