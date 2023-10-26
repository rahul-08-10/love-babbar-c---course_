#include<iostream>
using namespace std;
int doubl(int a , int x[] , int index){
    // base case 
    if(index>a){
        return -1;
    }
    else{
        x[index]=2*x[index];
        return x[index];
    }
    // process
    return doubl(a , x , index+1);
    // recurssive case 
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
    cout<<doubl(a , x, index);
}