class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int k = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                s[k++] = s[i];
            }
        }
        s.resize(k);
        return s;
    }
};