class Solution {
  public:
    string countSort(string s) {
        // code here
        vector<int> freq(26,0);
        for(char ch : s){
            freq[ch-'a']++;
        }
        string str = "";
        for(int i=0;i<freq.size();i++){
            while(freq[i] > 0){
                freq[i]--;
                str.push_back(i+'a');
            }
        }
        return str;
    }
};