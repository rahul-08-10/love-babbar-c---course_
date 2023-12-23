#include<iostream>
using namespace std;
class xyz{
    public:
    int data;
    xyz *next;
// constructor 
    xyz(int number){
        this->data=number;
        this->next=NULL;
    }
};
void printl(xyz* &head){
    xyz*temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void reverse( xyz * &head , xyz* &prev , xyz* &curr ){
    while(curr!=NULL){
        xyz* nez = curr->next;
        curr->next=prev;
        prev=curr;
        curr=nez; 
    }
}
int main(){
    xyz *a= new xyz(10);
    xyz *b= new xyz(20);
    xyz *c= new xyz(30);
    xyz *d= new xyz(40);

    a->next=b;
    b->next=c;
    c->next=d;

    xyz *head=a;
    printl(head);
    xyz *prev=NULL;
    xyz *curr=head;
    reverse( head , prev , curr);
    cout<<"-------------------------";
    printl(head);
    
}