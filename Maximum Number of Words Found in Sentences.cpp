class Solution(object):
    def mostWordsFound(self, sentences):
        max_words = 0

        for sentence in sentences:
            max_words = max(max_words, sentence.count(' ') + 1)

        return max_words
sol = Solution()
print(sol.mostWordsFound([
    "alice and bob love leetcode",
    "i think so too",
    "this is great thanks very much"
]))  

print(sol.mostWordsFound([
    "please wait",
    "continue to fight",
    "continue to win"
])) 
        
