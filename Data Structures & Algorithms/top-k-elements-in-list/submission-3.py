import heapq

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        seen = defaultdict(int)
        for i, num in enumerate(nums):
            seen[num] += 1
        heap = []
        for key in seen:
            if len(heap) < k:
                heapq.heappush(heap, (seen[key], key))
            else:
                heapq.heappushpop(heap, (seen[key], key))

        res = []
        for item in heap:
            res.append(item[1])
        return res
