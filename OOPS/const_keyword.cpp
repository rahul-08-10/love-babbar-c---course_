// const keyword is used to delare the function or the variable constant means that is immutable 
#include<iostream>
using namespace std;
int main(){
    // const int a=5;
    // a=11;
    // cout<<a;
    // in c++ their are two types of vlue lvalue and rvalue 
    // lvalue is like int a; they need menory location and rvalue are like 5 or &a=b (reference variable )they don't need memory location


    // #next topic 
    // 1 constant wiht pointer 
    const int *a=new int(2); // const data and non-const pointer
    cout<<*a<<endl;
    int b=20; // here we can't modify the *a value in a but we have modified the pointer  
    a=&b;  // that's why we are re-assigning the pointer 
    cout<<*a<<endl;

    // 2 constant pointer and non-const data
    int *const d=new int(5);
    cout<<*d<<endl;
    *d=20;   
    cout<<*d<<endl;  // this will be modified
    int h=50;
    // int e=&b;  // error 


    //3 constant pointer and constant data 
    const int *const r=new int (10);
    cout<<*r<<endl;




}