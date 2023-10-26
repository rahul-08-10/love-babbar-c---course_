#include<iostream>
using namespace std;
int counting(int a , int x[]){
    int count0=0;
    int count1=0;
    for(int i=0 ; i<a ; i++){
        if(x[i]==0){
            count0++;
        }
        else if(x[i]==1){
            count1++;
        }

    }
        cout<<"value of count0:- "<<count0<<endl;
        cout<<"value of count1:- "<<count1;
}
int main(){
    int a;
    cin>>a;
    int x[a];
    for(int i=0 ; i<a ; i++){
        cin>>x[i];
    }
    for(int i=0 ; i<a ; i++){
        cout<<x[i];
    }
    cout<<endl;
    counting( a , x);
}