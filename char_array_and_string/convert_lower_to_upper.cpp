#include<iostream>
using namespace std;
int main(){
    char a[10];
    cin.getline(a , 10);
    int index=0;
    while(a[index]!='\0'){
        char cu=a[index];
        if(cu[index]>='a' && cu<='z'){
            cu=cu-'a'+'A';
        }
    }
}