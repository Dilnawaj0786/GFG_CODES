class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        vector<int> freq(26,false);
        for(char ch : s){
            if(ch != ' ' || ch != ','){
                char x = tolower(ch);
                freq[x-'a'] = true;
            }
        }
        
        for(int i=0;i<freq.size();i++){
            if(freq[i] == false) return false;
        }
        return true;
    }
};