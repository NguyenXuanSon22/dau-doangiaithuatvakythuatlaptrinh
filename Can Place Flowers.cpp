class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        length = len(flowerbed)
    
        for i in range(length):
            if flowerbed[i] == 0:
                # Check left and right neighbors
                empty_left = (i == 0 or flowerbed[i-1] == 0)
                empty_right = (i == length - 1 or flowerbed[i+1] == 0)
                
                if empty_left and empty_right:
                    flowerbed[i] = 1  # Plant a flower
                    n -= 1
                    if n == 0:
                        return True
        return n <= 0
