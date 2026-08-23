class Solution {
  public:
    string convert(string& s) {
        // code here
        if(s[0] != ' '){
            s[0] = s[0]-32;
        }

            for(int i=0;i<s.size()-1;i++){
                if(s[i] == ' '){
                    s[i+1] = s[i+1]-32;
                }
            }
        return s;
    }
};