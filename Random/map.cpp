#include <bits/stdc++.h>
using namespace std;
class Human{
public:
string name;
void setname(string s){
    this->name = s;
    
}
void speak(string s, int n){
    cout<<s;
}
void speak(string t){
    cout<<t;
}
void print(){
    cout << name;
}
};
int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5, 5, 5};
    // map<int, int> mp;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     mp[arr[i]]++;
    // }

    // for (const auto &freq : mp)
    // {
    //     cout << freq.first << " " << freq.second << endl;
    // }
    Human *h1 = new Human;
    Human h2;
    h1->setname("hello");
    h1->print();

    h2.setname("worlds");
    h2.print();
    // h1.speak("speak", 5);
    // Human h2;
    // h2.speak("bhaubhau");
    
    return 0;
}
