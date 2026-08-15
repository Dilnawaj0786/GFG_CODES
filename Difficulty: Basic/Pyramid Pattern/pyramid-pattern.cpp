#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    int nsp = n-1;
    int nst = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<nsp;j++){
            cout<<" ";
        }
        for(int j=0;j<nst;j++){
            cout<<"*";
        }
        cout<<endl;
        nsp--;
        nst += 2;
    }
    

    return 0;
}