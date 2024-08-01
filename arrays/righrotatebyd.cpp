#include<bits/stdc++.h>
using namespace std;
void rightrotate(int arr[], int n, int k){
    k = k%n;
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}
int main(){
    int n,k;
    cin >> n;
    cin >> k;
    int arr[n];
    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }
    rightrotate(arr, n, k);
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}