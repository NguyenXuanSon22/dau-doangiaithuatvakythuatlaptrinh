class Solution(object):
    def sortPeople(self, names, heights):
        people = sorted(zip(heights, names), reverse=True)
        return [name for height, name in people]
sol = Solution()
print(sol.sortPeople(["Mary","John","Emma"], [180,165,170]))
print(sol.sortPeople(["Alice","Bob","Bob"], [155,185,150]))

        
