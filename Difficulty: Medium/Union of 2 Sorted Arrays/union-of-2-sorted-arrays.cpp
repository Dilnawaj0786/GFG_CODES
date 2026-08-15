class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n= a.size();
        int  m = b.size();
        int i = 0;
        int j = 0;
        while(i < n && j < m){
            if(a[i] == b[j]){
                i++;
                j++;
            }else if(a[i] < b[j]){
                i++;
            }else {
                a.push_back(b[j]);
                j++;
            }
        }
        
        while(j < m){
             a.push_back(b[j]);
             j++;
        }
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        return a;
        
    }
};