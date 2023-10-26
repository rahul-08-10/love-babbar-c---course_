#include<iostream>
using namespace std;

/*
string problem(int a , int x[] , int target ){
    for(int i=0 ; i<a ; i++){
        for(int j=i+1 ; j<a ; j++){
            if(x[i]+x[j]==target){
                return "yes";
            }
        }
    }
    return "no";
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
    int target;
    cin>>target;
    string ans=problem(a ,x , target);
    if(ans=="yes"){
        cout<<"1";
    }
    else{
        cout<<"2";
    }
}

*/

// better approach  by using hash-map
