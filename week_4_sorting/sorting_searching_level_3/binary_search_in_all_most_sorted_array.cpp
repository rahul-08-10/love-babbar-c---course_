#include<iostream>
using namespace std;
int binary(int a , int x[] , int search){
    int s=0;
    int e=(a-1);
    int m=(s+e)/2;
    while(s<=e){
        if(search==x[m]){
            return m;
        }
        if(search==x[m-1]){
            return m-1;
        }
        if(search==x[m+1]){
            return m+1;
        }
        else if (search > x[m]){
            s=m+2;
        }
        else{
            e=m-2;
        }
        m=(s+e)/2;
    }
    return -1;
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
    int search;
    cin>>search;
    cout<<binary(a , x , search);
}