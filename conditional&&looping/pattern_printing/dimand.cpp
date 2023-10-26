#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=a/2;
    for(int i=0 ; i<b ; i++){

       for(int j=0 ; j<b-i-1 ; j++){
            cout<<" ";
        }
        // printing stars 
        for(int j=0 ; j<i+1 ; j++){
            cout<<"* ";
        }
        cout<<endl;  
    }
    for(int i=0 ; i<b ; i++){
         for(int j=0 ; j<i ; j++){
            cout<<" ";
        }
        // stars 
        for(int j=0 ; j<b-i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}