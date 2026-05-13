class Solution(object):
    def numberGame(self, nums):
        nums.sort()
        arr = []
        i = 0
        j = len(nums) - 1
        
        while i < j:
            alice_min = nums[i]
            i += 1
            bob_min = nums[i]
            i += 1
            arr.append(bob_min)
            arr.append(alice_min)
        
        return arr
        
