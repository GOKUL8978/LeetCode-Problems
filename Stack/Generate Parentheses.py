class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        stack =[]
        res = []
        def back(open,closed):
            if open == closed == n:
                res.append("".join(stack))
                return 
            
            if open < n:
                stack.append("(")
                back(open+1,closed)
                stack.pop()
            if closed < open:
                stack.append(")")
                back(open,closed+1)
                stack.pop()
            
        back(0,0)
        return res

