class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // prefix array
        // suffix array
        // fill another array with the answers
        vector<int> pre(nums.size());
        vector<int> post(nums.size());

        // starting cases
        pre[0] = 1;
        post[nums.size() - 1] = 1;

        vector<int> ans(nums.size());
        for(int i = 1; i < nums.size(); i++) {
            pre[i] = pre[i - 1] * nums[i - 1];
            int postPtr = nums.size() - i - 1;
            post[postPtr] = post[postPtr + 1] * nums[postPtr + 1];
        }

        for(int i = 0; i < nums.size(); i++) {
            ans[i] = pre[i] * post[i];
        }

        return ans;
    }
};
