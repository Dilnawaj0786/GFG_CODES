class Solution {
  public:
    int getCount(string s, int k) {
        // code here
        vector<int> freq(26,0);
        int i=0;
        while(i<s.size()){
            char ch = s[i];
            freq[s[i]-'a']++;
            while(s[i+1] == ch){
                i++;
            }
            i++;
        }
        int cnt = 0;
        for(int i=0;i<freq.size();i++){
            if(freq[i] == k) cnt++;
        }
        return cnt;
    }
};