class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        return len(max(bytes(nums).split(b'\x00')))