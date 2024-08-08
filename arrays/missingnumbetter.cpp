#include<bits/stdc++.h>
using namespace std;
//Better approach to find the missing number in an array - not optimal
int missingnum(vector<int> list, int N){
    int hash[N+1] = {0};
    for(int i = 0; i< N-1; i++){
        hash[list[i]] = 1;
    }
    for(int i = 1; i <= N; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;

}
int main(){
    int N;
    cin >> N;

    vector<int> list;
    
    for(int i = 0; i <N-1; i++){
        int input;
        cin >> input;
        list.push_back(input);
    }
    int result = missingnum(list, N);
    cout<< result;

    return 0;
}