#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    // to deal with the space problem we can take input through
    getline(cin, name);
    // cin>>name;
    cout<<name<<endl;
    // for printing the character wise 
    int i=0;
    while(name[i]!='\0'){
        cout<<name[i]<<endl;
        i++;
    }
}