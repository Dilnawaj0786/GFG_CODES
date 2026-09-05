class Solution {
  public:
    string removeDuplicates(string& s) {
        // code here.
        string ans = "";
        char ch = s[0];
        ans.push_back(ch);
        for(int i=1;i<s.size();i++){
            if(s[i] == ch) continue;
            else{
                ch = s[i];
                ans.push_back(ch);
            }
        }
        return ans;
    }
};