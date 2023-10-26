#include<iostream>
#include<string.h>
using namespace std;
class Student {
    // properties or we can say attributes
public: 
    int marks;
    int rollno;
    string name;
    int no;
    // behaviours or methods 
    void gaming(){
        cout<<"gaming"<<endl;
    } 
    void sleeping(){
        // these are the methods 
        cout<<"sleeping";
    }
    // making default constructor 
    Student(){
        // it will assign the values of all the attributes as a grabage 
    } 
    // making another constructor
    Student(int number , int roll , string naam){
        marks=number;
        rollno=roll;
        name=naam;
    } 
};
// constructure doesn't have any return type , constructure are public always 
// their can be multiple constructures



// here we have one more topic that is polymorphism means same function playing different-different roles 
int main(){

    Student s1;    // s is the instance of the student class
    s1.gaming();
    s1.sleeping();
    Student s2(95, 1 , "ram");
    cout<<"marks of the s2:- "<<s2.marks<<endl;
    cout<<s1.no;
    return 0;
    
}

