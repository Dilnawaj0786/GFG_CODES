class Solution {
  public:
  int count;
    void merge(vector<int> &a, vector<int> &b,vector<int> &arr){
        int i=0,j=0,k=0;
        while(i<a.size() && j < b.size()){
            if(a[i] > b[j]){
                arr[k++] = b[j++];
                count += (a.size()-i);
            }else{
               arr[k++] = a[i++];
            }
        }
         while(i<a.size()) arr[k++] = a[i++];
        while(j<b.size()) arr[k++] = b[j++];
    }


    void mergesort(vector<int>& arr){
        int n = arr.size();
        if(n <= 1) return;
        vector<int> a(n/2);
        vector<int> b(n-n/2);
        int idx = 0;
        for(int i=0;i<n/2;i++){
            a[i] = arr[idx++];
        }
        for(int i=0;i<n-n/2;i++){
            b[i] =arr[idx++];
        }
        mergesort(a);
        mergesort(b);
        merge(a,b,arr);
    }
    int inversionCount(vector<int> &arr) {
        // code here
        count = 0;
        mergesort(arr);
        return count;
        
    }
};