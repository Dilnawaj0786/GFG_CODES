class Solution {
  public:
  
  void helper(string& s,vector<string>& ans, string st,int i){
      if(i == s.size()){
          ans.push_back(st);
          return;
      }
      helper(s,ans,st,i+1);
      st.push_back(s[i]);
      helper(s,ans,st,i+1);
  }
    vector<string> powerSet(string s) {
        // code here
        string st = "";
        vector<string> ans;
        helper(s,ans,st,0);
        return ans;
    }
};
