class Solution {
  public:
    int extractMaximum(string &s) {
        // code here
        bool check = false;
        int num = 0;
        string current ="";
        for(int i=0;i<s.length();i++){
            if(s[i] >= '0' && s[i] <= '9'){
                check = true;
                current.push_back(s[i]);
            }else{
                if(current != ""){
                    num = max(num,stoi(current));
                    current ="";
                }
            }
        }
        
        if(current != ""){
            num = max(num,stoi(current));
            current ="";
        }
        
        if(check) return num;
        else return -1;
    }
};