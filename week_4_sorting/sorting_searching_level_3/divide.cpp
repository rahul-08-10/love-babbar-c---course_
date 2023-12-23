// need to be converted into the float value 
#include<iostream>
using namespace std;
int sorting(int a , int b){
    int s=0;
    int e=a;
    float m= s+(e-s)/2;
    float ans=1;
    while(s<e){
        if(m*b==a){     // here we will chech that mid * divisor == to the divident 
            return m;
        }
        else if(m*b>a){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
}
int main(){
    int divident , divisor;   // a is the divident , b is the divisor 
    cin>>divident>>divisor;
    // in the question i have a divident , qu , divisor , reminder , divisor * ques + reminder givers divident 
    // question arises that how to decide the sign weather the sign is negative or positive for the ans in that case we'll use 
    // absolute keyword and make a saperate case for handing  
    float c = sorting( abs(divident) , abs(divisor));
    if((divident>0 && divisor<0 )|| (divident<0 && divisor>0)){
        c=0-c;
    }
    cout<<c;
    
}