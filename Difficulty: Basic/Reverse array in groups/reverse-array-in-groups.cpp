class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int times=n/k;
        int i=0;
        while(times>0){
            reverse(arr.begin()+i,arr.begin()+i+k);
            i=i+k;
            times--;
        }
        // if(k<n){
        reverse(arr.begin()+i,arr.end());
        
    }
};
