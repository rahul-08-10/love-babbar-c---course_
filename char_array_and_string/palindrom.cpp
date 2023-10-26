#include<iostream>
#include<string.h>
using namespace std;
bool palind(char arr[] , int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
           return false;
        }
    }
    return true;
}
int main(){
    char arr[10];
    cin.getline(arr , 10);
    int len=strlen(arr);
    bool valid=palind(arr , len);
    if(valid){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}