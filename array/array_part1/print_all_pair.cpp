#include<iostream>
using namespace std;
int pai(int a , int x[]){
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<a ; j++){
            cout<<x[i]<<" "<<x[j]<<endl;
        }
    }
}
int main(){
    int a;
    cin>>a;
    int x[a];\
    for(int i=0 ; i<a ; i++){
        cin>>x[i];
    }
    for(int i=0 ; i<a ; i++){
        cout<<x[i];
    }
    pai( a , x);
} 