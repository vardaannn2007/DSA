class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for (int x : nums) {
            if (x == 0) {
                if (digit == 0)
                    count++;
                continue;
            }
            while (x > 0) {
                if (x % 10 == digit)
                    count++;
                x /= 10;
            }
        }
        return count;
    }
};