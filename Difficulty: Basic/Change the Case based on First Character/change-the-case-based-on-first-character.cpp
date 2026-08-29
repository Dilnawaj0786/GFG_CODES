class Solution {
  public:
    string modify(string& s) {
        // code here
        bool flag = false;
        if(s[0] >= 'A' && s[0] <= 'Z') flag = true;
        for(int i=1;i<s.size();i++){
            if(flag && (s[i] >= 'a' && s[i] <= 'z')){
                s[i] = s[i]-32;
            }else if(!flag && (s[i] >= 'A' && s[i] <= 'Z')){
                s[i] = s[i] +32;
            }
        }
        return s;
    }
};