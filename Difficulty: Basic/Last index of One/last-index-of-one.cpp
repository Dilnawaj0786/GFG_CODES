class Solution {
  public:
    int lastIndex(string &s) {
        // code here
        int end = s.size()-1;
        int st = 0;
        
        while(st <= end){
            if(s[end] == '1'){
                return end;
            }else{
                end--;
            }
        }
        return -1;
    }
};