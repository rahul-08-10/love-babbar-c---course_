#include<iostream>
using namespace std;
int main(){
    char a[10];
    // this the way to write the cin when you want to include the shape.
    cin.getline(a , 10);
    int length=0;
    for(int i=0 ; i<10 ; i++){
        if(a[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    cout<<length;
}