class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        vector<int> freq(26,0);
        vector<int> freqs(26,0);
        for(char ch : s1){
            freq[ch-'a']++;
        }
        
        for(char ch : s2){
            freqs[ch-'a']++;
        }
        
        if(freq == freqs) return true;
        return false;
    }
};