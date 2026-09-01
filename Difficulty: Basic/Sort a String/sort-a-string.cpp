class Solution {
  public:
    string sortString(string &s) {
        // code here
        vector<int> freq(26,0);
        for(char ch : s){
            freq[ch-'a']++;
        }
        int j =0;
        int n = s.size()-1;
        for(int i=0;i<freq.size();i++){
            while(freq[i] > 0 && j <= n){
                s[j] = i+'a';
                j++;
                freq[i]--;
            }
        }
        return s;
    }
};