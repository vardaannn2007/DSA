class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for (char c : s)
            mp[c]++;
        int oddMax = 0;
        int evenMin = INT_MAX;
        for (auto &p : mp) {
            if (p.second % 2)
                oddMax = max(oddMax, p.second);
            else
                evenMin = min(evenMin, p.second);
        }
        return oddMax - evenMin;
    }
};