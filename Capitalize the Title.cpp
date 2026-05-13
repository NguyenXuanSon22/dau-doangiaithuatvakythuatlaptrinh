class Solution(object):
    def capitalizeTitle(self, title):
        words = title.split()
        result = []

        for word in words:
            if len(word) <= 2:
                result.append(word.lower())
            else:
                result.append(word[0].upper() + word[1:].lower())

        return " ".join(result)
sol = Solution()
print(sol.capitalizeTitle("capiTalIze tHe titLe"))
print(sol.capitalizeTitle("First leTTeR of EACH Word"))
print(sol.capitalizeTitle("i lOve leetcode"))
        
