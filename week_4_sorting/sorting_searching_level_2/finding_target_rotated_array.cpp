#include<iostream>
using namespace std;
int binary(int a , int x[] , int target , int c){
    int s=0;
    int e=a-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        if(target > x[0] && target<c){
            ans=binary(a , 0 , c , target );
        }
        else{
            ans = binary(a , c+1 , a-1 , taregt  )
        }
        
    }
}
int pivot(int a , int x[]){
    int s=0;
    int e=a-1;
    int m=s+(e-s)/2;
    int ans=0;
    while(s<e){
        if(s==e){
            return s;
        }
        if(x[m]>x[m-1]){
            ans=m;
            return ans;
        }
        if(x[m]<x[m+1]){
            ans=m-1;
            return ans;
        }
        else if(x[s]<x[e]){
            s=m+1;
        }
        else{
            e=m-1;
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
        cout<<x[i];
    }
    // first we'll find the pivot element 
    int c=pivot(a , x);
    int target;
    cin>>target;
    binary(a ,x , target , c);
}