class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        int cnt=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
               if(arr[i]==cnt ){
                 cnt++;
                 }
            else if(arr[i]!=arr[i-1]){
                 return cnt;
            }
            // else cnt++;
            }
        }
        return cnt;
    }
};