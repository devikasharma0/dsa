#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char level;
    char *name;
    static int time;
    Hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }
    Hero(int health, char l){
        //cout<<"this ->"<<this<<endl;//this is a pointer which points to the object which is calling the function
        this -> health = health;
        this -> level = l;
        
    }
    //this is a copy constructor
    Hero(Hero &h){
        char *ch = new char[strlen(h.name)+1]; //+1 for null character
        strcpy(ch,h.name);
        this->name=ch;
        cout<<"Copy constructor called"<<endl;
        this->health=h.health;
        this-> level=h.level;
    }
    //static function
    static int random(){
       return time; //static function can access only static properties
    }
    void print(){
        cout<<"Name is: "<<this-> name<<endl;
        cout<<"Health is: "<<this-> health<<endl;
        cout<<"Level is: "<<this-> level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(char l){
        level=l;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    //destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
        
    }
};
int Hero::time=0;
int main()
{
    cout<< Hero::time<<endl;
    // Hero a;
    // Hero *b = new Hero();
    // delete b; //manually calling destructor for dynamic object 
    // Hero hero1;
    // hero1.setHealth(100);
    // hero1.setLevel('A');
    // char name[]="Devs";
    // hero1.setName(name);
    // hero1.print();
    // Hero hero2(hero1);
    // hero1.name[0]='A';
    // hero1.print();
    // hero2.print();
    // // Hero devs3(70, 'C');
    // Hero devs4(devs3);
    // devs3.print();
    // devs4.print();
    
    // Hero devs(100,'A');
    // //cout<<"address of devs: "<<&devs<<endl; //address of devs
    // Hero devs2(200,'B');
    // devs.print();
    // devs2.print();

    // //cerate object of class Hero
    //Dynamic allocation
    // Hero *devs = new Hero();
    // devs->setHealth(100);
    // cout<<"Helath is"<<devs->getHealth()<<endl;
    // devs->setLevel('A');
    // cout<<"Level is"<<devs->getLevel()<<endl;
    

    //Static allocation
    // Hero devs; 
    // cout<<"Health is:"<<devs.getHealth()<<endl;
    // devs.health=100;
    // devs.level='A';
    // cout<<"Health is:"<<devs.health<<endl;
    // cout<<"size of devs: "<<sizeof(devs)<<endl;// it will give size same as number of properties in class
    
    return 0;
}