class Solution(object):
    def fourSumCount(self, nums1, nums2, nums3, nums4):
        sum_count = Counter(a + b for a in nums1 for b in nums2)
        
        result = 0
        for c in nums3:
            for d in nums4:
                target = -(c + d)
                if target in sum_count:
                    result += sum_count[target]
        
        return result
        
