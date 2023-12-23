#include<iostream>
using namespace std;
class node{
    public: 
    int data; 
    node *next;  // it is the pointer to the next nodes it will point to the next node that is connect with other node 
     
    // make constructor
    node(){
        this->next=NULL;
        // default consrtuctor 
    } 
    // when ever we initialise the objec then the constructor call is done by the compl
    node(int number){
        cout<<"inside constructor "<<endl;
        this->data=number;
        this->next=NULL;
    }

};
    void printl(node* head){
        node*temp=head;   // pointing a pointer named temp to the head 
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<endl;

    }
int main(){
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);
    node *e = new node(50); // creation of the instance a for class node

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL; 

    node *head=a;   // here we have pointed the pointer name head to the first list 
    printl(head); // head is passed further 

    
}