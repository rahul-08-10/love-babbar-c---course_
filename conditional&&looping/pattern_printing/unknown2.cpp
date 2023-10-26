// 1
// 2*2
// 3*3*3
// 4*4*4*4


#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<i+1 ; j++){
            if(j==i){
                cout<<i+1; 
            }
            else{
                cout<<i+1<<"*";
            }
        }
        cout<<endl;
    }
}