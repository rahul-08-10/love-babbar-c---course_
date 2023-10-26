#include<iostream>
using namespace std;
int fact(int a){
    // base case 
    if(a==1){
        return 1;
    }
    if(a==0){
        return 1;
    }
    // recurssive condition 
    return a*fact(a-1);

}
int main(){
    int a;
    cin>>a;
    cout<<"factorial:- "<<fact(a);
}