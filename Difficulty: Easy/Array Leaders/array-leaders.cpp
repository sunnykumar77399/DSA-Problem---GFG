

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& a) {
        // Code here
         vector<int> led;
         int n=a.size(); 
        int cur_led=0; 
        
         for(int i=n-1;i>=0;i--){
            if(cur_led<=a[i]){
                cur_led=a[i];
                led.push_back(cur_led);
                 
            } 
         }
        //  if(count==0) return {-1};
        //  else 
        reverse(led.begin(),led.end()) ;
        return led;
    }
};