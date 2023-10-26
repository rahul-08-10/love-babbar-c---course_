// input - 10,20,30,40,50,60
// output- 10,60,20,50,30,40

#include<iostream>
using namespace std;
int printno(int a , int x[]){
    int s=0;
    int e=a-1;
    int m=(e-s)/2;
    for(int i=0 ; i<a ; i++){
        while(s<=e){
            if(s==e){
                cout<<x[s];
            }
            else{
            cout<<x[s];
            cout<<x[e];
            }
            s++;
            e--;
        }
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
    printno( a, x);
}