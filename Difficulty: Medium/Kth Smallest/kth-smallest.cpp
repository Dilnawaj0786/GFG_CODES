class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        // sort(arr.begin(),arr.end());
        // return arr[k-1];
        
        priority_queue<int> pq;
        for(int ele : arr){
            pq.push(ele);
            if(pq.size() > k) pq.pop();
        }
        return pq.top();
        
    }
};