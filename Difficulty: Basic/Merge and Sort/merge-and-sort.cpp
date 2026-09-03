class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        int n = arr1.size();
        int m = arr2.size();
        vector<int> ans;
        int st =0;
        int end = arr1.size()-1;
        int i =0;
        int j = arr2.size()-1;
        while(st <= end && i <= j){
            if(arr1[st] < arr2[i]){
                ans.push_back(arr1[st]);
                st++;
            }
            else if(arr1[st] == arr2[i]){
               ans.push_back(arr1[st]);
                st++;
                i++;
            }
            else{
                ans.push_back(arr2[i]);
                i++;
            }
        }
        
        while(i <= j){
            ans.push_back(arr2[i]);
            i++;
        }
        
        while(st <= end){
            ans.push_back(arr1[st]);
            st++;
        }
        return ans;
    }
};