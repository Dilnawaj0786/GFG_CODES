class Solution {
  public:
    void merge(vector<int>& a,vector<int>& b,vector<int>& arr){
        int k =0,i=0,j=0;
        while(i < a.size() && j < b.size()){
            if(a[i] > b[j]){
                arr[k++] = b[j++];
            }else{
                arr[k++] = a[i++];
            }
        }
        while(i < a.size()) arr[k++] = a[i++];
        while(j < b.size()) arr[k++] = b[j++];
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        int n = r-l+1;
        if(n == 1) return;
        vector<int> a(n/2);
        vector<int> b(n-n/2);
        int k =0;
        for(int i=0;i<n/2;i++){
            a[k++] = arr[i];
        }
        for(int i=n/2;i<n;i++){
            b[k-n/2] = arr[i];
            k++;
        }
        mergeSort(a,0,a.size()-1);
        mergeSort(b,0,b.size()-1);
        merge(a,b,arr);
    }
};