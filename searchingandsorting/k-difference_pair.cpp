// in this question we have to find the k-difference pair and the pairs must be different 
// using two pointer approach to solve the question
#include<iostream>
using namespace std;
int diff(int a , int x[] , int k ){
    int i=0 , j=1;
    while(j<a){
        int difference=x[i]-x[j];
        if(difference==k){
            cout<<x[i]<<""<<x[j];
            i++ , j++;
        }
        if(difference>k){
            i++;
        }
        if(difference<k){
            j++;
        }
        if(i==j){
            j++;
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
    int k;
    cin>>k;
    cout<<diff(a , x , k);
}   