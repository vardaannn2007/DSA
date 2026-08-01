class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s = "";
        while (a > 0 || b > 0) {
            if (a > b) {
                s += 'a';
                a--;
                if (a > b) {
                    s += 'a';
                    a--;
                }
                if (b > 0) {
                    s += 'b';
                    b--;
                }
            } else {
                s += 'b';
                b--;
                if (b > a) {
                    s += 'b';
                    b--;
                }
                if (a > 0) {
                    s += 'a';
                    a--;
                }
            }
        }
        return s;
    }
};