#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    // Temporary vector to store merged array
vector<int> temp;
int left = low;
int right = mid+1;
//Merge the two parts of the divded array
while(left<=mid && right<= high){
    if(arr[left] <= arr[right]){ 
        temp.push_back(arr[left]);
        left++;
    } 
    else{
        temp.push_back(arr[right]);
        right++;
}
}
 // Insert all the remaining values from left to mid into temp[]
while(left<=mid){
    temp.push_back(arr[left]);
    left++;
}
    // Insert all the remaining values from right to high into temp[]
while(right<=high){
    temp.push_back(arr[right]);
    right++;
}
// Assign sorted data stored in temp[] to arr[]
for(int i = low; i<=high; i++){
    arr[i] = temp[i-low];
}
}

void merge_Sort(vector<int> &arr, int low, int high){
if(low == high) {
    return;
    }
int mid = (low+high)/2;
merge_Sort(arr,low,mid);
merge_Sort(arr,mid+1,high);
merge(arr,low,mid,high);
}


int main(){
    int n;
    cin >> n;
    vector<int> arr;// = {38, 27, 43, 3, 9, 82, 10};
    int temp;
    for(int i = 0; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    merge_Sort(arr, 0, arr.size() - 1);
    // Print sorted array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
};