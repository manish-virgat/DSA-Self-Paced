# Rest of the code is already given in driver code

class Solution:
    def findSum(self,s):
        import re
        numbers = re.findall(r'\d+',s)
        numbers = [int(i) for i in numbers]
        return sum(numbers)