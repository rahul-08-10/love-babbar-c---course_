#include<iostream>
using namespace std;
int closer(int a , int x[] , int k , int n){
    int s=0;
    int e=a;
    while(abs(s-e)>=k){
        if(n-x[s]>n-x[e]){
            s++;
        }
        else{
            e--;
        }
        for(int i=s ; i<e ; i++){
            cout<<x[i];
        }
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
    int k , n;
    cin>>k>>n;
    closer(a , x ,k , n);
}