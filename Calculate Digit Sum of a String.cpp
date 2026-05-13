class Solution(object):
    def digitSum(self, s, k):
        while len(s) > k:
            new_s = []
            for i in range(0, len(s), k):
                group = s[i:i+k]
                group_sum = str(sum(int(ch) for ch in group))
                new_s.append(group_sum)
            s = ''.join(new_s)
        return s
        
