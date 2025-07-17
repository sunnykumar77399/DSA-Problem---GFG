class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        int min=0;
        min=arr[low];
        for(int i=low;i<high;i++){
            if(arr[i]>arr[i+1]){
               min=arr[i+1];
               return min;
            }
             
        }
        return min;
    }
};
