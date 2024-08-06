#include<bits/stdc++.h>
using namespace std;
int findelement(vector<int> arr, int k, int n){
    for(int i = 0; i< n; i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}
int main(){
    vector <int> arr;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }
    int k;
    cin >> k;
    int result = findelement(arr, k, n);
    cout << result;
    return 0;
}