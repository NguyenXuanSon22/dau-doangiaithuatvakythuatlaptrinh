class Solution(object):
    def checkValid(self, matrix):
        n = len(matrix)
        expected = set(range(1, n + 1))

        for row in matrix:
            if set(row) != expected:
                return False

        for col in range(n):
            col_set = set(matrix[row][col] for row in range(n))
            if col_set != expected:
                return False

        return True

sol = Solution()
print(sol.checkValid([[1,2,3],[3,1,2],[2,3,1]]))  
print(sol.checkValid([[1,1,1],[1,2,3],[1,2,3]]))
        
