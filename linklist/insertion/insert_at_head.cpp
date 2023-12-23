#include<iostream>
using namespace std;
class lst{
public:
    int data;
    lst *next;

    // making constructor
    lst(int data){
        cout<<"the parameterised constructor";
        this->data=data;
        this->next=NULL;
    }
};
void insert_first(lst* &head , int data){
    if(head==NULL){
        lst *new_nord= new lst(data);
        head=new_nord;
    }
    else{
    // creation of the new node 
    lst* new_nord = new lst(data);
    // the new node will point to the head 
    new_nord->next=head;
    // the head will point to the new formed node 
    head=new_nord;

    }
}
void printll(lst *head){
    lst *temp=head;
    int count=0;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    cout<<"number of the nodes:- "<<count;
    cout<<endl;
}
int main(){
    // objects or the instances 
    lst *first= new lst(100);
    lst *second=new lst(200);
    lst *third=new lst(300);
    lst *four=new lst(400);

    // creating the head pointer 
    lst *head=first;
    first->next=second;
    second->next=third;
    third->next=four;
    printll(head);
    cout<<endl;
    insert_first(head , 500);
    cout<<endl;
    printll(head);


    

}