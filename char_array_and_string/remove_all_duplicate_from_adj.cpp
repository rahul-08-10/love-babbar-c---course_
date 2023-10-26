#include<iostream>
#include<string.h>
using namespace std;
string remove(string name , int lenth ){
    string temp=" ";
    int i=0;
    while(i<name.size()){
        if(lenth>0 && temp[temp.size()-1]==name[i]){
            temp.pop_back();
        }
        else{
            temp.push_back();
        }
        i++;
    }    
    return temp;
}
int main(){
    string name;
    getline(cin , name);
    int lenth=name.size();
    cout<<lenth;
    remove(name , lenth);
}