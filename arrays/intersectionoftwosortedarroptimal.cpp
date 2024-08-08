#include <bits/stdc++.h>
using namespace std;
//this is optimal approach for finding interscetion of two sorted arrays
vector<int> intersect(vector<int> &a, vector<int> &b, int n, int m){
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
    
}
int main(){
    vector<int> a;
    vector<int> b;
    int n;
    int m;
    cin >> n;
    cin >> m;
    for(int i = 0; i< n; i++){
        int inputa;
        cin >> inputa;
        a.push_back(inputa);
    }
    for(int i = 0; i<m; i++){
        int inputb;
        cin >> inputb;
        b.push_back(inputb);
    }
    vector<int> result = intersect(a,b,n,m);
    for(int i=0; i<result.size(); i++){
        cout<< result[i] <<" ";
    }
    return 0;
}