class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                return i;
            }
        }
        return -1;
    }
};