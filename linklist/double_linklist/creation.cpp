// creation of the double linklist 
#include<iostream>
using namespace std;
class xyz{
    public:
    int data;
    xyz *next;
    xyz *prev;

    
    xyz(int number){
        this->data=number;
        this->next=NULL;
        this->prev=NULL;
    }

};
int find_lenght(xyz *head){
    xyz *temp=head;
    int count=0;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
        count++;
    }
    cout<<endl;
    return count;
}
void printl(xyz *head){
    xyz *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_head(xyz* &head , xyz* &tail , int data){
    xyz* new_nord= new xyz(data);
    if(head==NULL){
        new_nord=head;
    }
    else{
        new_nord->next=head;
        head->prev=new_nord;
        head=new_nord;
    }
}
void insert_at_tail(xyz * &head , xyz * &tail , int data ){
    xyz *new_nord = new xyz(data);
    if(tail==NULL){
        new_nord = tail;
    }
    else{
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=new_nord;
        new_nord->prev=tail;
        tail=new_nord;
    }
}
void insert_at_any_position(xyz* &head , xyz* &tail , int data , int position){
    int len=find_lenght(head);
    xyz *new_nord = new xyz(data);
    if(head==NULL){
        head=new_nord;
        tail=new_nord;
    }
    else if(position==1){
        insert_at_head(head , tail , data);
    }
    else if(position==len){
        insert_at_tail(head , tail , data);
    }
    else{
        // inserting AT the middle
       xyz*prev_nord=NULL;
       xyz*curr_nord=NULL;
    }
}
int main(){
    // create node 
    xyz *a= new xyz(10);
    xyz *head =a;
    xyz *tail =NULL;
    printl(head);
    int data;
    cin>>data;
    insert_at_head(head , tail , data);
    printl(head);
}