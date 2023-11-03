#include<stdio.h>

int main(){
    int a;
    scanf("%d" , &a);
    int x[a];
    for(int i=0 ; i<a ; i++){
        scanf("%d" , &x[i]);
    }
    for(int i=0 ; i<a ; i++){
        printf("%d" , x[i]);
    }
    merge(a , x);
}