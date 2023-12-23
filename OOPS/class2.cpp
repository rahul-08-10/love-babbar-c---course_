#include<iostream>
#include<string.h>
using namespace std;
class student{
    // these are the attributes of the student class matlab characterstics 
    // all these process is going in the stack 
    public:
        int rollno;
        int clas;
        string name;
    // methods or funvtion of the student class  
    void gaming (){
        cout<<"gaming";
    }
    // copy constructor :- it has no return type we'll use this to access the attributes
    // it can copy the attributes only we can't call the functions 
    // why we need copy constructor bcz we need deep copy not the shallow copy 
    // why const ex of name change 
    student(const student&srcobj){
        cout<<"copy constructor"<<endl;
        this->clas=srcobj.clas;
        this->name=srcobj.name;
        this->rollno=srcobj.rollno;
    }
    student(){
        cout<<"default constructor"<<endl;
    }
    // paramter constructor 
    student(int roll , int cl , string naam){  // paramters 
        this->rollno=roll;
        this->clas=cl;
        this->name=naam;
        cout<<"parameter constructor"<<endl; 
    }
};
int main(){
    // student s1;
    student s2(23 , 5 , "ram"); // arguments
    // student s1(s2);
    // if we do this than copy constructor is not called next 2-lines 
    student s1;
    s1=s2;
    cout<<s1.rollno<<endl;
    cout<<s2.rollno<<endl;

    // copy constructor 

}