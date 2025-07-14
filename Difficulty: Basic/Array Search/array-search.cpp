class Solution {
  public:
    int search(vector<int>& arr, int X) {
        // code here
        int key,flag=0;
        key=X;
       for(int i=0;i<arr.size();i++){
           if(arr[i]==key){
               return i;
           }
       } 
       flag--;
       return flag;
    }
};