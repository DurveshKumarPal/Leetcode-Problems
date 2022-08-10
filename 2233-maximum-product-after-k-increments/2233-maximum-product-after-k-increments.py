class Solution:
    def maximumProduct(self, nums: List[int], k: int) -> int:
        pq = []
        for num in nums:
            heapq.heappush(pq, num)
        
        while k > 0:
            val = heapq.heappop(pq)
            heapq.heappush(pq, val+1)
            k -= 1
        
        ans = 1
        while pq:
            ans = ans*heapq.heappop(pq) % (10**9 + 7)
        
        return ans