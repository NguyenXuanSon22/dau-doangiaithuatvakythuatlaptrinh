class Solution(object):
    def isBoomerang(self, points):
        (x1, y1), (x2, y2), (x3, y3) = points
        if len({(x1, y1), (x2, y2), (x3, y3)}) < 3:
            return False
        return (y2 - y1) * (x3 - x1) != (y3 - y1) * (x2 - x1)
        
