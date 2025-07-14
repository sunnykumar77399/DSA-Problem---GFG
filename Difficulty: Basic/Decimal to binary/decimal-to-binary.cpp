class Solution {
  public:
    string decToBinary(int N) {
         string ans;
    while(N > 0)
    {
        int temp = N%2;
        ans.push_back(temp + '0');
        N /= 2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};