class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split()
        l1=l[::-1]
        rev=" ".join(l1)
        return rev