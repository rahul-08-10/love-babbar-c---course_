#include<iostream>
using namespace std;
int linear(int a , int x[] , int search){
    for(int i=0 ; i<a ; i++){
        if(search==x[i]){
            cout<<"element found :- "<<i;
        }
    }
    cout<<"not found";
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
    cout<<"the element found :- "<<linear(a , x , search);

}