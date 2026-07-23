class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x : nums)
            mp[x]++;
        int Max = 0;
        int ans = -1;
        for (auto p : mp) {
            if (p.first % 2 == 0) {
                if (p.second > Max || (p.second == Max && p.first < ans)) {
                    Max = p.second;
                    ans = p.first;
                }
            }
        }

        return ans;
    }
};