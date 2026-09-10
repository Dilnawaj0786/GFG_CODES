class Solution {
  public:
    void generate(string s,int opening, int ending, vector<string>& ans,int n){
    if(ending == n){
        ans.push_back(s);
        return;
    }
    if(opening<n) generate(s+"(",opening+1,ending,ans,n);
    if(opening > ending) generate(s+")",opening,ending+1,ans,n);
  }
    vector<string> generateParentheses(int n) {
        // code here
        n = n/2;
        vector<string> ans;
        generate("",0,0,ans, n);
        return ans;
    }

};