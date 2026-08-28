class Solution {
  public:
    string delAlternate(string s) {
        // code here
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(i % 2 == 0){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};