class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1') count++;
        }
        
        int substr = (count * (count-1))/2;
        return substr;
        
    }
};