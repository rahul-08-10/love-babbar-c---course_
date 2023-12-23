// using const value with the variables 
#include<iostream>
using namespace std;
class ABC{
int x;
int *y;

public:
// yeh default constructor hai
ABC(){
    x=0;
    y= new int(0);
}

// making getter and setter 
 int getX()  const
 {
    return x;
 }
 void setX(int _val){
    x=_val;
 }
 int getY(){
    return *y;
 }
 void setY(int _val){
    *y=_val;
 }
};
int main(){

}