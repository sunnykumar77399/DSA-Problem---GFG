class Solution {
  public:
    unordered_map<char,int> mpp;
    int find(string &s,int k,int j){
        int cnt=0;
        for(int i=j;i>=0;i--){
            if(mpp[s[i]]==0 && cnt!=k){
                mpp[s[i]]=1;
                cnt++;
            }
            if(mpp[s[i]]==0 && cnt==k){ 
                return i+1;
            }
        }
        return 0;
    }
    int longestKSubstr(string &s, int k) {
        // code here
        int n=s.size();
        int l=0;
        int cnt=0;
        int lenght=-1;
        for(int i=0;i<n;i++){
            if(mpp[s[i]]==0 && cnt!=k){
                mpp[s[i]]=1;
                cnt++;
            }
            if(mpp[s[i]]==0 && cnt==k){
                mpp.clear();
                l=find(s,k,i);
            } 
            lenght=max(lenght,i-l+1);
        }
        if(cnt==k) return lenght=max(lenght,n-l-1);
        else return -1;
        // return lenght;
    }
};