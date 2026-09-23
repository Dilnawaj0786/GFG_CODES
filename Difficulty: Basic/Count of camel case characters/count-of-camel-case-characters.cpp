
class Solution {
  public:
    int countCamelCase(string s) {
        // code here.
        int count = 0;
        for(char ch : s){
            int x = (int)ch;
            if( x >= 65 && x <= 90 ) count++;
        }
        return count;
    }
};