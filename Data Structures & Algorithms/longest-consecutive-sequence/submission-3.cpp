class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(), nums.end());
        int longest_streak = nums.empty() ? 0 : 1;

        for (int i = 0; i < nums.size(); i++) {
            // found nums[n] - 1, not the start of a sequence
            if (mp.find(nums[i] - 1) != mp.end()) 
                continue;
            // we have the start of a sequence
            int cnt = 1;
            int curVal = nums[i];
            while(mp.find(curVal + 1) != mp.end()) {
                cnt++;
                curVal++;
            }
            
            longest_streak = max(cnt, longest_streak);
        }


        return longest_streak;
    }
};
