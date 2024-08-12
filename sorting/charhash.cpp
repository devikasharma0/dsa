#include<bits/stdc++.h>
using namespace std;
//Calculating frequency of characters appearing in the string
int main(){
    string s;
    cin >> s;
//pre compute
int hash[26] = {0}; //initialising an array of size 26 with value 0
//we used 26 here because we are doing it for lowercase, we will do 256 if we want to include all the characters
for(int i = 0; i<s.length(); i++){
    //aabsgugrd
    hash[s[i]-'a']++; //insering elements to correct index, ACII valuse of a is 97 also if we were to use all charactrs no need to -a because they will be mapped to correct index
}

    int q;
    cin >>q;
    while(q--){
        char c;
        cin >> c;

        //fetch
        cout<<hash[c-'a']<<endl; //if we used all characters just hash[c]
    }
    
    return 0;
};