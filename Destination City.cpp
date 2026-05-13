class Solution(object):
    def destCity(self, paths):
        outgoing = set()

    
        for cityA, cityB in paths:
            outgoing.add(cityA)

        for cityA, cityB in paths:
            if cityB not in outgoing:
                return cityB

sol = Solution()
print(sol.destCity([["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]))
print(sol.destCity([["B","C"],["D","B"],["C","A"]]))
print(sol.destCity([["A","Z"]]))
        
