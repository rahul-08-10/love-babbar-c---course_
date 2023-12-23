#include<iostream>
using namespace std;
int number(int arr_len , int arr[] , int max_weight){
    int i=0;
    int j=1;
    int count=0;
    for(int i=0 ; i<arr_len ; i++){
        if((arr[i]+arr[j])<max_weight){
            cout<<"("<<arr[i]<<arr[i+1]<<")"<<endl;
            count=count+1;
            i++;
            j++;
        }
        else{
            cout<<"("<<arr[i]<<")"<<endl;
            j=j+2;
            count=count+1;
        }
    }
    cout<<count;
}
int main(){
  int arr_len;
  cin>>arr_len;
  int arr[arr_len];
  for(int i=0 ; i<arr_len ; i++){
    cin>>arr[i];
  }
  for(int i=0 ; i<arr_len ; i++){
    cout<<arr[i];
  }
  int max_weight;
  cin>>max_weight;
  number(arr_len , arr , max_weight);
}