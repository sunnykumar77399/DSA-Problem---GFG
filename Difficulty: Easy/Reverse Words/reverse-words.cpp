class Solution {
  public:
    string reverseWords(string &s) {
        // code here
         string res="";
        string temp="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!='.'){
                temp+=s[i];
            }else if(!temp.empty()){
                res=temp+'.'+res;
                temp="";
            }
        }
        if(temp!="." && !temp.empty())
        res=temp+'.'+res;
        res.pop_back();
        return res;
    }
};