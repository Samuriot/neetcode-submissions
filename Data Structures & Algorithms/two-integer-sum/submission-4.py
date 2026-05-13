class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}
        for i in range(len(nums)):
            val = target - nums[i]
            if val in mp:
                return [mp[val], i]
            else:
                mp[nums[i]] = i
        
        return []