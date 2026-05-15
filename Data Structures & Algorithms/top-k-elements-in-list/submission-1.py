class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        ans = []
        freqCounter = defaultdict(int)
        freqSorted = defaultdict(list)

        for num in nums:
            freqCounter[num] += 1
        
        for key, val in freqCounter.items():
            freqSorted[val].append(key)
        
        for freq in sorted(freqSorted.keys(), reverse=True):
            for num in freqSorted[freq]:
                ans.append(num)
                if len(ans) == k:
                    return ans
        
        return ans