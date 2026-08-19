class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos;
        vector<int> neg;
        for(int ele : arr){
            if(ele >= 0){
                pos.push_back(ele);
            }else{
                neg.push_back(ele);
            }
        }
        int k =0;
        
        int i=0;
        int j =0;
        while(i < pos.size() && j < neg.size()){
            arr[k++] = pos[i++];
            arr[k++] = neg[j++];
        }
        while(i < pos.size()){
            arr[k++] = pos[i++];
        }
        while(j < neg.size()){
            arr[k++] = neg[j++];
        }
        
    }
};