#include<iostream>
using namespace std;
int fib(int a){
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
    int ans= fib(a-1)+fib(a-2);
    return ans;
}
int main(){
    int a;
    cin>>a;
    cout<<"fib:- "<<fib(a);
}