class Solution(object):
    def countWords(self, words1, words2):
        c1 = Counter(words1)
        c2 = Counter(words2)

        count = 0
        for word in c1:
            if c1[word] == 1 and c2[word] == 1:
                count += 1

        return count
sol = Solution()
print(sol.countWords(
    ["leetcode","is","amazing","as","is"],
    ["amazing","leetcode","is"]
))  

print(sol.countWords(
    ["b","bb","bbb"],
    ["a","aa","aaa"]
))  

print(sol.countWords(
    ["a","ab"],
    ["a","a","a","ab"]
))
        
