class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        count = {}

        if len(s) != len(t):
            return False
        
        for i in s:
            count[i] = count.get(i, 0) + 1
        
        for i in t:
            count[i] = count.get(i, 0) - 1

        return all(i == 0 for i in count.values())        