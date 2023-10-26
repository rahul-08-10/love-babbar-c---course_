// we have an array and array contain some even number and we have to store all the even number into the vector
#include <bits/stdc++.h> 
using namespace std;
void store(int a ,int x[] , int index , vector<int> vect){
    if(x[index]%2!=0){
        return ;
    }
    if(x[index]%2==0){
        vect.push_back(x[index]);
    }
    store(a, x, index , vect);
}
int main(){
    int a;
    cin>>a;
    int x[a];
    for(int i=0 ; i<a ; i++){
        cin>>x[i];
    }
    for(int i=0 ; i<a ; i++){
        cout<<x[i];
    }
    int index=0;
    vector<int>vect;
    store(a ,x , index , vect);
    for (auto it = vect.begin(); it != vect.end(); ++it){

        cout << ' ' << *it; 
    }
}