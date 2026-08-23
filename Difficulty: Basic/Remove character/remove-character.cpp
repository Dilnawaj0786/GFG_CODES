class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        vector<int> freq(26,0);
        for(int i=0;i<str2.length();i++){
            freq[str2[i]-'a']++;
        }
        
        string ans = "";
        for(int i=0;i<str1.size();i++){
            if(freq[str1[i]-'a'] > 0){
                continue;
            }else{
                ans.push_back(str1[i]);
            }
        }
        return ans;
    }
};
