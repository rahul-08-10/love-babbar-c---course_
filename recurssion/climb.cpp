// climbing stairs 
#include<iostream>
using namespace std;
int count (int stairs){                                 
    if(stairs==1){
        return 1;
    }
    if(stairs==2){
        return 2;
    }
    else{
        return count(stairs-1) + count(stairs-2);
    }
}
int main(){
    int stairs;
    cout<<"enter no of stairs :- ";
    cin>>stairs;
    count(stairs);
    cout<<"the total ways are:- "<<count(stairs);
}