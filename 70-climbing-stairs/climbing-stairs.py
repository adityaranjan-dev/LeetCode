class Solution:
    def climbStairs(self, n: int) -> int:
        prev = 1
        prev2 = 0

        for i in range(n):
            curr = prev2 + prev
            prev2 = prev
            prev = curr
        
        return prev
        