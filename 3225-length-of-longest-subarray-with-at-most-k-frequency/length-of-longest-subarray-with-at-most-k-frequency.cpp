class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = 0;
        unordered_map<int, int> hash;
        int left = 0;
        for (int right = 0; right < n; right++) {
            hash[nums[right]]++;
            while (hash[nums[right]] > k) {
                hash[nums[left]]--;
                left++;
            }
            mx = max(mx, right - left + 1);
        }
        return mx;
    }
};