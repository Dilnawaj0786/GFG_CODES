class Solution {
  public:
    string concatenatedString(string &s1, string &s2) {
        //  code here
        string ans = "";
        vector<int> x(26,0);
        vector<int> y(26,0);
        bool match = false;
        
        for(char ch : s1){
            x[ch-'a']++;
        }
        
        for(char ch : s2){
            y[ch-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(x[i] >= 1 && y[i] >= 1){
                x[i] = 0;
                y[i] = 0;
            }
        }
        
        for(int i=0;i<s1.size();i++){
            if(x[s1[i]-'a'] >0){
                match = true;
                ans.push_back(s1[i]);
            }
        }
        
        for(int i=0;i<s2.size();i++){
            if(y[s2[i]-'a'] >0){
                match = true;
                ans.push_back(s2[i]);
            }
        }
        
        if(match) return ans;
        else return ("-1");
    }
};