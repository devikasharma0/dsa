#include<bits/stdc++.h>
using namespace std;
bool sortarr(int arr[], int n){
    for(int i = 1; i< n; i++){
        if(arr[i]>arr[i-1]){

        }
        else return false;
    } return true;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i< n; i++){
        cin >> arr[i];
    }
    bool isSorted = sortarr(arr, n);
    if (isSorted) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}