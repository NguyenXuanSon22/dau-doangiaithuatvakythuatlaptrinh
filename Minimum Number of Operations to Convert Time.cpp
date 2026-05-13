class Solution(object):
    def convertTime(self, current, correct):
        def to_minutes(time):
            h, m = map(int, time.split(":"))
            return h * 60 + m
        
        current_minutes = to_minutes(current)
        correct_minutes = to_minutes(correct)
        
        diff = correct_minutes - current_minutes
        count = 0
        
        for step in [60, 15, 5, 1]:
            count += diff // step  
            diff %= step           
        
        return count
        
