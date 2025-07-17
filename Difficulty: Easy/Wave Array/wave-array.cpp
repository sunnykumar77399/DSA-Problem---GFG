class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        for(int i=1;i<arr.size();i+=2){
            swap(arr[i-1],arr[i]);
        }
    }
};