#include<bits/stdc++.h>
using namespace std;
//Brute force approach to find the missing number in an array
int missingnum(vector<int> list, int N){
    for(int i = 1; i<=N; i++){
        int flag = 0;
        for(int j = 0; j<N-1; j++){
            if(list[j]==i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
    }
}
int main(){
    int N;
    cin >> N;
    vector<int> list;
    
    for(int i = 0; i<N-1; i++){
        int input;
        cin >> input;
        list.push_back(input);
    }
    int result = missingnum(list, N);
    cout<< result;

    return 0;
}