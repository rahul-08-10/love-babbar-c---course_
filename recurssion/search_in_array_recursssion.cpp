#include<iostream>
using namespace std;
int recurssion(int a , int x[] , int search, int index ){
    // base case
    if(index>a){
        return -1;
    }
    if(x[index]==search){
        return index;
    }
    // recuressive condition 
    return recurssion(a , x , search , index+1);
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
    int index=0;
    int search;
    cin>>search;
    cout<<recurssion(a , x , search , index);
}
