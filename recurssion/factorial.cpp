#include<iostream>
using namespace std;
int factorial(int a){
    // base case 
    if(a==0 || a==1){
        return 1;
    }
    cout<<a;
    return a*factorial(a-1);
    // recurssive relation 
}
int main(){
    int a;
    cin>>a;
    cout<<"factorial:- "<<factorial(a);
}