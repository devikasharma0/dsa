#include<iostream>
using namespace std;
class Animal{
    public:
    void bark(){
        cout<< "barking"<< endl;
    }
};
class Human{
public:
void speak(){
    cout<<"speaking"<<endl;
}
};

class Hybrid: public Human, public Animal{

};


int main(){
    Hybrid h;
    h.bark();
    h.speak();
    return 0;
}