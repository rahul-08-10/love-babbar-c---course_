#include<iostream>
using namespace std;
int pivot(int a , int x[]){
    int s=0;
    int e=a-1;
    int m=(s+e)/2;
    int ans=0;
    while(s<e){
        if(x[m]<x[m+1]){
            ans=m-1;
            return ans;
        }
        if(x[m]>x[m-1]){
            ans=m;
            return ans;
        }
        else if(x[s]>x[m])
        {
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=(s+e)/2;
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
    cout<<"the value is :- "<<pivot(a , x);

}