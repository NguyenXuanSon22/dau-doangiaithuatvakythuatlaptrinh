class Solution(object):
    def pickGifts(self, gifts, k):
        max_heap = [-g for g in gifts]
        heapq.heapify(max_heap)
        
        for _ in range(k):
            largest = -heapq.heappop(max_heap)
            reduced = int(largest ** 0.5)
            heapq.heappush(max_heap, -reduced)
        
        return -sum(max_heap)
        
