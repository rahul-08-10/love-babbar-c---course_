#include<iostream>
using namespace std;
int linear(int a , int x[] ,int search){
    for(int i=0 ; i<a ; i++){
        if(search==x[i]){
            return 0;
        }
    }
    return -1;
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
    cout<<endl;
    int search;
    cin>>search;
    int s= linear( a , x , search);

    if(s==0){
        cout<<"element found ";
    }
    else{
        cout<<"element not found";
    }
}