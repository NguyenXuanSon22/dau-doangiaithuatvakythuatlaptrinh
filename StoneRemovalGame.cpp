class Solution(object):
    def caw(self, n):
        alice_move = 10
        if n < alice_move:
            return False
        n -= alice_move
        next_move = alice_move - 1
        alice_turn = False
    
        while True:
            if n < next_move:
                return alice_turn  
                n -= next_move
                next_move -= 1
                alice_turn = not alice_turn
print(caAliceWin(12))  
print(canAliceWin(1))   
print(canAliceWin(20))  