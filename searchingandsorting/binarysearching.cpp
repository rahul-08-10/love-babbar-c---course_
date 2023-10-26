#include<iostream>
using namespace std;
int binary(int a , int x[] , int search){
    int s=0;
    int e=(a-1);
    int m=(s+e)/2;
    while(s<=e){
        if(search==x[m]){
            return 0;
        }
        else if (search > x[m]){
            s=m+1;
        }
        else{
            e=m-1;
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
    int s=binary(a , x , search);

    if(s==0){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}