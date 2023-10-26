#include<iostream>
using namespace std;
void count(int a){
    // base case
    if(a==1){
        cout<<1;
        return ;
    }
    return count(a-1);
    cout<<a;
    // recersive case

}
int main(){
    int a;
    cin>>a;
    count(a);

}