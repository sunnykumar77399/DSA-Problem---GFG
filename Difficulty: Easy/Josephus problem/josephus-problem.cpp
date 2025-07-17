/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       //Your code here
        int win=0;
        for(int i=1;i<=n;i++){
            win = (win+k)%i;
        }
        return win+1;
    }
};


