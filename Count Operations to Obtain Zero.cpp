class Solution(object):
    def countOperations(self, num1, num2):
        operations = 0
        
        while num1 > 0 and num2 > 0:
            if num1 >= num2:
                times = num1 // num2
                num1 -= times * num2
                operations += times
            else:
                times = num2 // num1
                num2 -= times * num1
                operations += times
        
        return operations
        
