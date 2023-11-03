// missing element in the sorted array 

/*

#include<iostream>
using namespace std;
int missing(int a , int x[]){
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<a ; j++){
            if(x[i]-x[j]==1){

            }
            else{
                return (x[i]+1);
            }
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
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<missing(a ,x );
}

*/




// using binary search 
#include<iostream>
using namespace std;
int missing(int a , int x[]){
    int s=0;
    int e=a-1;
    int m=s+(e-s)/2;
    while(s<=e){
        
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
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<missing(a ,x );
}