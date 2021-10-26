class Solution:
    def longestPalindrome(self, s: str) -> str:
                    
        
        def palin(left, right):
            while (left >=0 and right < len(s) and s[left] == s[right]):
                left-=1
                right+=1
            return s[left+1:right]
        ans = ""
        for i in range(len(s)):
            temp = palin(i,i)
            if len(temp) > len(ans):
                ans = temp
            temp = palin(i,i+1)
            if len(temp) > len(ans):
                ans = temp
        return ans
