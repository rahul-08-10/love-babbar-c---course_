#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    // string b='ram';
    for(int i=0 ; i<'\0' ;i++){
        if(a[i]==b[i]){
            cout<<a[i];
        }   
        else{
            cout<<"not equal";
        } 
    }
}