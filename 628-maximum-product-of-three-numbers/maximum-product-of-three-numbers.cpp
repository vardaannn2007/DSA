class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        vector<int> temp = nums;

        int max1 = *max_element(temp.begin(), temp.end());
        temp.erase(find(temp.begin(), temp.end(), max1));

        int max2 = *max_element(temp.begin(), temp.end());
        temp.erase(find(temp.begin(), temp.end(), max2));

        int max3 = *max_element(temp.begin(), temp.end());

        int min1 = *min_element(nums.begin(), nums.end());
        nums.erase(find(nums.begin(), nums.end(), min1));

        int min2 = *min_element(nums.begin(), nums.end());

        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};