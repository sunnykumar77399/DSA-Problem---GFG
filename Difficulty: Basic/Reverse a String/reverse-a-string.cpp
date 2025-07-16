// User function Template for C++
class Solution {
  public:
    string reverseString(string& str) {
        // code here
        int n=str.size();
        for(int i=0;i<n/2;i++){
            swap(str[i],str[n-i-1]);
        }
    //   str.reverse();
       return str;
    }
};
