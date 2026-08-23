class Solution {
  public:

    string firstAlphabet(string &s) {
        // code here
        string ans ="";
        ans.push_back(s[0]);
        for(int i=1;i<s.size()-1;i++){
            if(s[i] == ' '){
                ans.push_back(s[i+1]);
            }
        }
        return ans;
    }
};