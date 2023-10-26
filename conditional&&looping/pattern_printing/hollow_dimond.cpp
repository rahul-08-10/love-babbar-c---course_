#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
        //space 
        for(int j=0 ; j<a-i-1 ; j++){
            cout<<" ";
        }
        for(int j =0 ; j<i+1 ; j++){
            if(j==0 || j==i){
              cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=0 ; i<a ; i++){

        for(int j=0 ; j<i ; j++){
            cout<<" ";
        }
        for(int j=0 ; j<a-i ; j++){
            if(j==0 || j==(a-i-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}