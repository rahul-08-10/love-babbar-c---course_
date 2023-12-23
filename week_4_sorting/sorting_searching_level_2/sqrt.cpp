#include<iostream>
using namespace std;
int sqrt(int a ){
    int s=0;
    int e=a-1;
    int m= s+(e-s)/2;
    while(s<e){
        if(m*m==a){
            return m;
        }
        else if(m*m > a){
            e=m-1;
        }
        else{
            s=m+1;
        }
        m= s+(e-s)/2;
    }

}
int main(){
    int a;
    cin>>a;
    cout<<sqrt(a );
}