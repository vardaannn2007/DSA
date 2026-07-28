class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26,0);
        for(char x:s){
            v[x-'a']++;
        }
        string left="";
        string right="";
        char mid='\0';
        for(int i=0;i<26;i++){
            left+=string(v[i]/2, 'a'+i);
                if(v[i]%2){
                    mid='a'+i;
                }
        }
        right=left;
        reverse(right.begin(),right.end());
        if(mid!= '\0')
            return left+mid+right;
        return left+right;
    }
};