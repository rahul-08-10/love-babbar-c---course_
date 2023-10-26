#include<iostream>
using namespace std;
int reverse(int a , int x[]){
    int s=0;
    int e=a-1;
    int m=(e-s)/2;
    for(int i=0 ; i<a ; i++){
        while(s<e){
            swap(x[s] , x[e]);
            s++;
            e--;
        }
    cout<<x[i];
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
    cout<<endl;
    reverse(a , x);
}