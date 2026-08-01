class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int Kin = INT_MAX;
        int Max = INT_MIN;
        bool ok = false;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i - 1]) ok = true;
            if(ok) Kin = min(Kin, nums[i]);
        }

        ok = false;

        for(int i = nums.size() - 2; i >= 0; i--){
            if(nums[i] > nums[i + 1]) ok = true;
            if(ok) Max = max(Max, nums[i]);
        }

        if(Kin == INT_MAX) return 0;

        int l, r;

        for(l = 0; l < nums.size(); l++){
            if(nums[l] > Kin) break;
        }

        for(r = nums.size() - 1; r >= 0; r--){
            if(nums[r] < Max) break;
        }

        return r - l + 1;
    }
};