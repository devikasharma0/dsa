//this is a brute force approach to find the union of two sorted arrays
#include<bits/stdc++.h>
using namespace std;
vector<int> sortedunion(vector<int> a, vector<int> b, int n1, int n2){
    set<int> st;
    for(int i = 0; i<n1; i++){
        st.insert(a[i]);
    }
     for(int i = 0; i<n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;

}
int main(){
    vector <int> a;
    vector <int> b;
    int n1;
    int n2;
    cin >> n1 >> n2;
    for(int i = 0; i<n1; i++){
        int inputa;
        cin >> inputa;
        a.push_back(inputa);
    }
    for(int i = 0; i<n2; i++){
        int inputb;
        cin >> inputb;
        b.push_back(inputb);
    }
    vector<int> result = sortedunion(a, b,n1, n2);
    for(int i = 0; i< result.size(); i++){
        cout << result[i]<< " ";
    }

    return 0;
}