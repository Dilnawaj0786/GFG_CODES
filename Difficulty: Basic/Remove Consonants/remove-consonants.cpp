class Solution {
  public:
  
  bool isvalid(char c){
      if(c == 'A' || c == 'E' || c== 'I' || c == 'O'||c == 'U' || c == 'a' || c== 'e' || c == 'i' || c == 'o' || c=='u'){
          return true;
      }
      return false;
  }
    string remConsonants(string &s) {
        // code here
        int k = 0;
        for(int i=0;i<s.size();i++){
            if(isvalid(s[i])){
                swap(s[i],s[k]);
                k++;
            }
        }
        
        s.resize(k);
        return s;
    }
};