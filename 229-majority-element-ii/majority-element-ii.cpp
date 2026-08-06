class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> ans;
        for(int x:nums){
            mp[x]++;
        }
        for(auto p:mp){
            if(p.second>n/3){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};