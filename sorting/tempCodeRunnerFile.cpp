
}
int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    merge_Sort(arr, 0, arr.size() - 1);

    // Print sorted array
    for (int i = 0; i < arr.size(); i++) {
        cout << ar