class Solution(object):
    def largestAltitude(self, gain):
        max_altitude = 0
        current = 0

        for g in gain:
            current += g
            max_altitude = max(max_altitude, current)
        return max_altitude
sol = Solution()
print(sol.largestAltitude([-5,1,5,0,-7])) 
print(sol.largestAltitude([-4,-3,-2,-1,4,3,2]))  
        
