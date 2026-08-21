class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int st = 0;
        int end = s.size()-1;
        
        while(st <= end){
            swap(s[st++],s[end--]);
            
        }
        return s;
    }
};
