#include<iostream>
using namespace std;
int duble(int a , int x[]){
    int i=0;
    for(int j=1 ; j<a ; j++){
        if(x[j]!=x[i]){
            x[i+1]=x[j];
            i++;
        }
        cout<<x[i];
    }
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
    duble(a , x);
}