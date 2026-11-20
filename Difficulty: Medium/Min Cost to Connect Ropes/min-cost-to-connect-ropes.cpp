class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int cost = 0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int ele : arr) pq.push(ele);
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int c = a+b;
            cost += c;
            pq.push(c);
        }
        return cost;
    }
};