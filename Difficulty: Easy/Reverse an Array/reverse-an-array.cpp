class Solution {
  public:
    void rvs(vector<int> &a,int n,int i){
        if(i>=n/2) return ;
        swap(a[i],a[n-i-1]);
        rvs(a,n,i+1);
    }
    void reverseArray(vector<int> &arr) {
        rvs(arr,arr.size(),0);
    }
};
