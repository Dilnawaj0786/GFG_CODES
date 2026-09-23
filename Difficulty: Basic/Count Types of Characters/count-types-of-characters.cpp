class Solution {
  public:
    vector<int> count(string &s) {
        // code here.
        vector<int>ans;
        int up =0;
        int lo = 0;
        int num = 0;
        int sp = 0;
        for(char ch : s){
            int x = (int)ch;
            if(x >= 65 && x <= 90) up++;
            else if(x >= 97 && x <= 122) lo++;
            else if(x >= 48 && x <= 57) num++;
            else sp++;
        }
        ans.push_back(up);
        ans.push_back(lo);
        ans.push_back(num);
        ans.push_back(sp);
        return ans;
    }
};