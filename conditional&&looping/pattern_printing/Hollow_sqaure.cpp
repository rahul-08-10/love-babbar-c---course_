#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int row=0 ; row<=a ; row++){
        for(int col=0 ; col<=a ; col++){
            if(row==0 || row==a){
                cout<<" * ";
            }
            else{
                if(col==0 || col==a){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
        }
        cout<<endl;
    }
}