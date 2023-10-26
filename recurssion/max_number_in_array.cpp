// finding max no. using recurssion
#include<iostream>
#include<limits.h>
using namespace std;
int highest(int a , int x[] , int index , int &max){
    // base case 
    if((index-1)>a){
        return -1;
    }
    if(x[index]>max){
       max=x[index];
    }
    // recurssive 
    return highest(a , x , index+1 , max );
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
    int max=INT_MIN;
    int index=0;
    cout<<"function :- "<<highest(a , x , index , max);
    cout<<"max is :- "<<max;
}












