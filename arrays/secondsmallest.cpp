#include<bits/stdc++.h>
using namespace std;
int secondsmall(int arr[], int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i = 1; i<n; i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i]< ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int result = secondsmall(arr,n);
    cout <<"the result is: " << result;
    return 0;
}