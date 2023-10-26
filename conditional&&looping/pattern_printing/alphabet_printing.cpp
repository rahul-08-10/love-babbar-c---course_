// A
// A B
// A B C 
// A B C D 

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1; i<a ; i++){
        for(int j=1; j<i+1; j++){
            cout<<char(j + 'A'-1);
            cout<<char(j+'A');
        }
        cout<<endl;

    }
}