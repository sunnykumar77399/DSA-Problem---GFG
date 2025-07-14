// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> a) {
        // code here
        sort(a.begin(),a.end());
    pair<int ,int > res;
    res.first=a[0];
    res.second=a.back();
    return res;
    }
};