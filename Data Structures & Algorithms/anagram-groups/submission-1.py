class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ans = []
        mp = defaultdict(list)
        for string in strs:
            sorted_string = "".join(sorted(string))
            mp[sorted_string].append(string)
        for strs in mp.values():
            arr = []
            for string in strs:
                arr.append(string)
            ans.append(arr)
        return ans