class Solution(object):
    def isPalindrome(self, s):
        new =""
        for n in s:
            if n.isalnum():
                new += n.lower()
        return new == new[::-1]




    
