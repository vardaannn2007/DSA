class Solution {
public:
    int findGCD(vector<int>& nums) {
        int Min=nums[0];
        int Max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<Min) Min=min(Min,nums[i]);
            if(nums[i]>Max) Max=max(Max,nums[i]);
        }
        return __gcd(Min,Max);
    }
};