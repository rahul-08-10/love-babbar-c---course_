#include<iostream>
#include<limits.h>
using namespace std;
int mini(int a , int x[] , int index , int min){
    // base case 
    if(index>a){
        return false;
    }
    if(x[index]<min){
        cout<<"in starting the value is :- "<<min;
        min=x[index];
        cout<<"after comparision :- "<<min;
        cout<<endl;
        cout<<"min value is :- "<<min;   // here the value
    }
    // recurssive call
    return mini(a , x , index+1 , min);

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
    int min=INT_MAX;
    mini(a , x , index , min);

}









// another method for solving 

/*
#include<iostream>
#include<limits.h>
using namespace std;
void mini(int a , int x[] , int index , int &minu){
    // base case 
    if(index>a){
        return ;
    }
    // if(x[index]<min){
    //     min=x[index];
    //     cout<<endl;
    //     cout<<"min value is :- "<<min;   // here the value is updated 
    // }
    minu=min(minu , x[index]);
    // recurssive call
    return mini(a , x , index+1 , minu);

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
    int minu=INT_MAX;
    mini(a , x , index , minu);
    cout<<minu;

}

*/