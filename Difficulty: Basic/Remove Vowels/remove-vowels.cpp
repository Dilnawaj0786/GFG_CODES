class Solution {
  public:
  bool isvalid(char ch){
      if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
      }
      return false;
  }
    string removeVowels(string& s) {
        // code here
        string ans="";
        for(int k =0;k<s.size();k++){
            if(!isvalid(s[k])){
                ans.push_back(s[k]);
            }
        }
        return ans;
        
    }
};