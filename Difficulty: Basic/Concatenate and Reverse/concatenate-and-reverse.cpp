class Solution {
  public:
    string conRevstr(string &s1, string &s2) {
        // code here
        int n = s1.size()-1;
        int m = s2.size()-1;
        string temp = s1;
        s1.resize(n+m+2);
        int i=0;
        for(int i=0;i<s1.size();i++){
            if(i <= n){
                s1[i] = temp[i];
            }else{
                s1[i] = s2[i-(n+1)];
            }
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};