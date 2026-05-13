class Solution(object):
    def countMatches(self, items, ruleKey, ruleValue):
        index_map = {
            "type": 0,
            "color": 1,
            "name": 2
        }
        idx = index_map[ruleKey]
        count = 0

        for item in items:
            if item[idx] == ruleValue:
                count += 1
        return count

sol = Solution()
print(sol.countMatches(
    [["phone","blue","pixel"],
     ["computer","silver","lenovo"],
     ["phone","gold","iphone"]],
    "color",
    "silver"
))  

print(sol.countMatches(
    [["phone","blue","pixel"],
     ["computer","silver","phone"],
     ["phone","gold","iphone"]],
    "type",
    "phone"
))
        
