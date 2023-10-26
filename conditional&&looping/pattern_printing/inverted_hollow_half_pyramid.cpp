#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
        // space 
        for(int j=0 ; j<i ; j++){
            // cout<<i<<j;
            cout<<" ";
        }
        for(int j=0 ; j<a-i ; j++){
            if(j==0 || j==a-i-1){
                // cout<<i<<j;
                cout<<"* ";
            }
            else{
                // cout<<i<<j;
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}





