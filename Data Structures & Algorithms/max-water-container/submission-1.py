class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1
        maxArea = 0

        while l < r:
            minHeight = min(heights[l], heights[r])
            currArea = (r - l) * minHeight

            if currArea > maxArea:
                maxArea = currArea
            
            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1
        
        return maxArea
            
