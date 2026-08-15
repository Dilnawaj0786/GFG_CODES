class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        int n = a.size();
        int m = b.size();
        int count = 0;
        int i =0;
        int j= 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        while(i<n && j < m){
            if(a[i] == b[j]){
                count++;
                i++;
                j++;
            }
            else if(a[i] < b[j]){
                i++;
            }else{
                j++;
            }
        }
        return count;
    }
};