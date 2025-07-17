class Solution {
  public:
    int removeDuplicates(vector<int> &a) {
        // code here
        int n=a.size();
         int count=1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                a[count]=a[i];
                count++;
            }
            
        }
        return count;
    }
};