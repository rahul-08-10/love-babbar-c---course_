#include<iostream>
using namespace std;
void array(int a , int x[] , int index){
    if(x[index]>a){
        return ;
    }
    cout<<x[index];

    array(a , x , index+1);
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
    int index=0;
    array(a , x , index);
}