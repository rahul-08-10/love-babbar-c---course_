#include<iostream>
using namespace std;
int binary(int a , int x[] , int search , int index){
    int s=0;
    int e=a-1;
    int m=s+(e-s)/2;
    while(s<e){
        return -1;
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
    int search;
    cin>>search;
    int index=0;
    binary(a , x , search , index);
}