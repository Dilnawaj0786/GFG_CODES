class Solution {
  public:
    void printPat(int n) {
        // code here
        int nsp = n-1;
        int nst = 1;
        for(int i=1;i<=2*n-1;i++){
            for(int j=0;j<nsp;j++){
                cout<<"  ";
            }
            for(int j =0;j<nst;j++){
                if(j == 0 || j== nst-1) cout<<"* ";
                else cout<<"  ";
            }
            cout<<endl;
            if(i<n){
                nsp--;
                nst += 2;
            }else{
                nsp++;
                nst -= 2;
            }
        }
    }
};