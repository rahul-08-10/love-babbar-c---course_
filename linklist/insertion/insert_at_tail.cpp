#include<iostream>
using namespace std;
class abc{
    public :
    int data;
    abc *next;

    abc(int data){
        this->data=data;
        this->next=NULL;
    }
};

void show(abc *head){
    abc *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

void insert_at_head(abc *head , int data){
    if(head==NULL){
        abc *newnode = new abc(data);
        head=newnode;
    }
    else{
    // creation of the new node 
    abc* newnord = new abc(data);
    // the new node will point to the head 
    newnord->next=head;
    // the head will point to the new formed node 
    head=newnord;
    }
}

void taill(abc *head , int data , abc*tail){
    if(head==NULL){
        abc *newnode=new abc(data);
        tail=newnode;
    }
    else{
        abc *newnode = new abc(data);
        newnode->next=tail;
        tail=newnode;
    }
}

int main(){
   abc *first=new abc(100);
   abc *second= new abc(200);
   abc *third = new abc(300);
   abc *fourth = new abc(400);
   abc *fifth = new abc(500);

   abc *head=first;
   first->next=second;
   second->next=third;
   third->next=fourth;
   fourth->next=fifth;

   abc *tail=fifth;

   show(head);
   cout<<endl;
   insert_at_head(head , 50);
   cout<<endl;
   taill(head , 600 , tail);

}