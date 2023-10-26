#include<iostream>
using namespace std;
int unique(int a , int x[]){
    int ans=0;
    for(int i=0 ; i<a ; i++){
        ans=ans^x[i];
        cout<<"value of ans after"<<i<<"step:- "<<ans<<endl;
    }
    cout<<endl;
    cout<<ans;
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
    unique(a , x);
}