#include<iostream>
using namespace std;
class list{
    public:
    int data;
    list *next;

    // make the constructor bcz we have to call the constructor when we initalise the instances 
    list(){
        cout<<"this is the default const";
    }
    list(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printll(list *head){
    // now making the temp pointer to access all the data by traversing the list
    list *temp=head;
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

    list *first= new list(10);
    list *second = new list(20);
    list *third=new list(30);
    list *fourth =new list(40);



    // now make the head pointer that will point to the first 
    list *head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    printll(head);
}