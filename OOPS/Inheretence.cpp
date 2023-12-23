#include<iostream>
using namespace std;
class bird{
    public :
    int age;
    int weight;
    
    bird(int age , int weight){
        age=23;
        weight=45;
    }

    void fly(){
        cout<<"bird can fly"<<endl;
    }
    void eat(){
        cout<<"birds can eat "<<endl;
    }
};

class sparrow:public bird{

    public:
    void grassing(){
        cout<<"sparrow do grassing"<<endl;
    }

};
int main(){
    bird s1(int age , int weight );
    // cout<<s1.age
}