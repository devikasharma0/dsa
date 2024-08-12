#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        //121212
        cin >> arr[i];
    }
    //pre-computing
    map<int,int> mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mp[number] <<endl; //prints the value corresponding to the number in mp
    }
    return 0;
};
