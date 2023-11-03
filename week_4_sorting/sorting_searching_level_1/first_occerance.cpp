#include<iostream>
using namespace std;
int occerance(int a , int x[] , int search){
    int s=0;
    int e=a-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(search==x[m]){
            ans=m;
            e=m-1;
        }
        else if (search > x[m]){
            s=m+1;
        }
        else{
            e=m-1;

        }
        m=s+(e-s)/2;
    }
    return ans;
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
    int search;
    cin>>search;
    int s=occerance(a , x , search);
    cout<<s;
    
    if(s==search){
        cout<<"element found"<<s;
    }
}