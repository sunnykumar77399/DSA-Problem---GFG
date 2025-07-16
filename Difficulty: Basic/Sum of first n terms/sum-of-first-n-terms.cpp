// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n) {
        if(n==0) return 0;
        int sum=n*n*n+sumOfSeries(n-1);
        return sum;
    }
};
