class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> mp;
        for(char x:s){
            mp[x]++;
        }
        int count=0;
        for(auto p:mp){
            if(p.second>0){
                count++;
            }
        }
        return count;
    }
};