
string to_upper(string str) {
    // code
    for(int i=0;i<str.size();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    for(int i=0;i<str.size();i++){
        cout<<str[i];
    }
}