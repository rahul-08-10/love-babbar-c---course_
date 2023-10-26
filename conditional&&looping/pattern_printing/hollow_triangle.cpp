#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<a-i ; j++){
            if(j==0 || i==a-1){
                cout<<"*";
            }
            else {
                if(j==0){
                    cout<<"*";
                }
                 if( j=a-i-1){
                cout<<"*";
                }
            }
            // else{
            //     cout<<" ";
            // }
        }
        cout<<endl;
    }
}