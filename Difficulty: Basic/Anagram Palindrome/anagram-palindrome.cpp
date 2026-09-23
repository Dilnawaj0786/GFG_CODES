class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        vector<int> freq(26,0);
        for(char ch : s){
            freq[ch-'a']++;
        }
        int oddone = 0;
        for(int i=0;i<freq.size();i++){
            if(freq[i] % 2 != 0){
                oddone++;
            }
        }
        if(oddone > 1) return false;
        return true;
    }
};