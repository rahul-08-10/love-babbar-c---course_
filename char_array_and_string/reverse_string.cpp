#include<iostream>
#include<string.h>
using namespace std;
void reverse(char arr[] , int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
}
int main(){
    char arr[10];
    cin.getline(arr , 10);
    int len=strlen(arr);
    reverse(arr , len);
    cout<<arr;
}