class Solution {
  public:
    string merge(string &s1, string &s2) {
        // code here
        int n = s1.size()-1;
        int m = s2.size()-1;
        string temp = s1;
        s1.resize(n+m+2);
        int k=0;
        int j=0;
        int i=0;
        while(k <=n && j <=m){
            s1[i++] = temp[k++];
            s1[i++] = s2[j++];
        }
        
        while(k <=n){
            s1[i++] = temp[k++];
        }
        
        while(j <=m){
            s1[i++] = s2[j++];
        }
        
        return s1;
    }   
};