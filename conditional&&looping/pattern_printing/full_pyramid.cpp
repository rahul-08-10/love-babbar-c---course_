#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
        //  printing spaces
        for(int j=0 ; j<a-i ; j++){
            cout<<" ";
        }
        // printing stars 
        for(int j=0 ; j<i+1 ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}