#include<iostream>
#include<limits.h>
using namespace std;
int numb(int a , int x[]){
    for(int i=0 ; i<a  ; i++){
        if(x[i]<x[i+1]){
            return 1;
        }
        return 0;
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
    cout<<numb(a , x);
    // int max=INT_MIN;
    // int ans=-1;
    // for(int i=0 ;i<a ; i++){
    //     if(x[i]>max){
    //         ans=x[i];
    //     }
    // }
    // cout<<" ans element is:- "<<ans<<endl;
    // for(int i=0 ; i<a ; i++){
    //     if(x[i]>max  && x[i]<ans){
    //         max=x[i];
    //     }
    // }
    // cout<<"the second largest element is :- "<<max;

}