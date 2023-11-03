#include<iostream>
using namespace std;
int pivot_element(int a , int x[]){
    int left=0;
    int right=0;
    
        for(int j=0 ; j<a ;j++){
            left=left+x[j];
        }
        for(int k=a-1 ; k>=0 ; k++ ){
            right=right+x[k];
        }
        if(left==right){
        cout<<left;
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
    pivot_element(a , x);
}