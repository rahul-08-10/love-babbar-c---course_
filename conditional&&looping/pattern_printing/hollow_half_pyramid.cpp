#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
        // SCPAE
        for(int j=0 ; j<a-i ; j++){
            cout<<" ";
        }
        for(int j=0 ; j<i+1 ; j++){
            if(j==0 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}