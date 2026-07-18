class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a = 1;
        vector<int> v;
        for (int i = 0; v.size() < k; ) {
            if (i < arr.size() && arr[i] == a) i++; 
            else v.push_back(a);
            a++;
        }
        return v[k - 1];
    }
};