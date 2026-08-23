class Solution {
  public:
  
  bool valid(char c){
      if(c == 'a' || c=='e' || c == 'i' || c=='o' || c == 'u'){
          return true;
      }
      return false;
  }
    string modify(string& s) {
        // code here
        int st =0;
        int end = s.size()-1;
        
        while(st <= end){
            if(valid(s[st]) && valid(s[end])){
                swap(s[st],s[end]);
                st++;
                end--;
            }else if(valid(s[st]) == false){
                st++;
            }else{
                end--;
            }
        }
         return s;
    }
 
};
