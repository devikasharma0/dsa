#include<bits/stdc++.h>
using namespace std;
//Brute force approach to find interscetion of 2 sorted arrays
vector<int> intersectionarr(vector<int> a, vector<int> b, int n, int m){
    vector<int> ans;
    int visit[m] ={0};
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i] == b[j] && visit[j]==0){
                ans.push_back(a[i]);
                visit[j] = 1;
                break;

            }
            if(b[j] > a[i]){
                break;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> a;
    vector<int> b;
    int m;
    int n;
    cin >> n;
    cin >> m;
    for(int i = 0; i< n; i++){
        int inputa;
        cin >> inputa;
        a.push_back(inputa);
    }
    for(int j = 0; j<m; j++){
        int inputb;
        cin >>inputb;
        b.push_back(inputb);
    }
    vector<int> result = intersectionarr(a,b,n, m);
    for(int i = 0; i<result.size(); i++){
        cout << result[i] <<" ";
    }

    return 0;
}