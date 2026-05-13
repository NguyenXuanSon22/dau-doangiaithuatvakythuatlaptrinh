class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        words = re.findall(r'\w+', paragraph.lower())
        banned_set = set(banned)
        count = Counter(word for word in words if word not in banned_set)
        return count.most_common(1)[0][0]

sol = Solution()
print(sol.mostCommonWord(
    "Bob hit a ball, the hit BALL flew far after it was hit.",
    ["hit"]
))
print(sol.mostCommonWord("a.", []))  
