class Solution {
  public:
    string printNumber(string& s) {
        // code here
        string ans = "";
        for(int i=0;i<s.size();i++){
            if((s[i]) >= 'a' && s[i] <= 'c'){
                ans.push_back(char('2'));
            }else if((s[i]) >= 'd' && s[i] <= 'f'){
                ans.push_back(char('3'));
            }else if((s[i]) >= 'g' && s[i] <= 'i'){
                ans.push_back(char('4'));
            }else if((s[i]) >= 'j' && s[i] <= 'l'){
                ans.push_back(char('5'));
            }else if((s[i]) >= 'm' && s[i] <= 'o'){
                ans.push_back(char('6'));
            }else if((s[i]) >= 'p' && s[i] <= 's'){
                ans.push_back(char('7'));
            }else if((s[i]) >= 't' && s[i] <= 'v'){
                ans.push_back(char('8'));
            }else if((s[i]) >= 'w' && s[i] <= 'z'){
                ans.push_back(char('9'));
            }
        }
        return ans;
    }
};
