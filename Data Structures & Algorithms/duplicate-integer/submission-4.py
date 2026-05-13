class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        arr = set()
        for num in nums:
            if num in arr:
                return True
            else:
                arr.add(num)
        return False