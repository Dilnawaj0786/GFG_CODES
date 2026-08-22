class Solution {
  public:
    int remAnagram(string &s1, string &s2) {
        // code here
        vector<int> freq(26,0);
        int match = 0;
        int del = 0;
        
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        
        for(int i=0;i<s2.length();i++){
            if(freq[s2[i]-'a'] >= 1){
                match++;
                freq[s2[i]-'a']--;
            }
        }
        
        del = (s1.length()-match) +  (s2.length()-match);
        return del;
    }
};
