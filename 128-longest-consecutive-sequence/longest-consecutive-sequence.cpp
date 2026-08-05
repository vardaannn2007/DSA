class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        int length = 1;
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        for (auto p : mp) {
            if (mp.find(p.first - 1) == mp.end()) {
                int curr = p.first;
                int len = 1;

                while (mp.find(curr + 1) != mp.end()) {
                    curr++;
                    len++;
                }

                length = max(length, len);
            }
        }

        return length;
    }
};