// ******- ******
// *****- - *****
// ****- - - ****
// ***- - - - ***
// **- - - - - **
// *- - - - - - *


#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0 ; i<a ; i++){
        for(int j=0 ; j<a-i ;j++){
            cout<<"*";
        }
        for(int k=0 ; k<i+1 ; k++){
                cout<<"- ";
        }
        for(int m=0 ; m<a-i ; m++){
            cout<<"*";
        }
        cout<<endl;
    }
}
