class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int K) {

        // Your code here
        int N=arr.size();
        int first=0,last=N-1,mid=0; 
        while(first<=last){
            
            mid=(first+last)/2;
            if(arr[mid]==K) return true;
            else if(arr[mid]>K) last=mid-1; 
            else first=mid+1;
        }   
    return false;
       
    }
};