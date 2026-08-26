class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        vector<int> freq(26,0);
        for(char ch : s){
            freq[ch -'a']++;
        }
        
        int max = -1;
        char ch;
        for(int i=0;i<freq.size();i++){
            if(freq[i] > max){
                max = freq[i];
                ch = i+'a';
            }
        }
        return ch;
    }
};