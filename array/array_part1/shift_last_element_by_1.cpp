// 1,2 ,3 ,4 ,5;
// 5, 1,2,3,4;
#include<iostream>

using namespace std;
int main(){
    int a;
    cin>>a;
    int x[a];
    int n;
    cin>>n;
    for(int i=0 ; i<a ; i++){
        cin>>x[i];
    }
    for(int i=0 ; i<a ; i++){
        cout<<x[i];
    }
    cout<<endl;
    for(int i=a-1 ; i>0 ; i--){
        if(x[i]==x[i+n]%a){

        swap(x[i],x[i-1]);
        }
    }
    for(int i=0 ; i<a ; i++){
        cout<<x[i];
    }

}