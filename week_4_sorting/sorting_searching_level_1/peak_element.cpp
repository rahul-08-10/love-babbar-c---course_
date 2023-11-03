#include<iostream>
using namespace std;
int peak(int a , int x[]){
    int s=0;
    int e=a-1;
    int m=s+(e-s)/2;
    while (s<e){
        if(x[m]>x[m-1] && x[m]>x[m+1]){
            return m;
        }
        else if(x[m-1]>x[m]){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=s+(e-s)/2;
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
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<peak(a ,x );
}