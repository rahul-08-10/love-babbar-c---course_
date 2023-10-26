#include<iostream>
using namespace std;
int main(){
    char ch[10];
    cin.getline(ch , 10);
    int index=0;
    while(ch[index]!='\0'){
        char cu=ch[index];
        if(cu == '@'){
            ch[index]=' ';
        }
        index++;
    }
    cout<<ch;
}