class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> mp;
        for(char x:s){
            mp[x]++;
        }
        return mp.size();
    }
};