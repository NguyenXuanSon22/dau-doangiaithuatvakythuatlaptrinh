class Solution(object):
    def containsDuplicate(self, nums):
        seen = set()
        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False

# Example usage:
print(containsDuplicate([1,2,3,1]))  
print(containsDuplicate([1,2,3,4]))  
print(containsDuplicate([1,1,1,3,3,4,3,2,4,2]))
        
