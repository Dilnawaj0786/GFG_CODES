class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int perimeter = -1;
        int n = arr.size()-1;
        int i=0;
        int j = n-2;
        while(i <= j){
            if(arr[i] + arr[i+1] > arr[i+2]){
                int x = arr[i] + arr[i+1] + arr[i+2];
                perimeter = max(x,perimeter);
            }
            i++;
        }
        return perimeter;
    }
};