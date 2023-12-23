#include<iostream>
using namespace std;
class xyz{
    public:
    int data;
    xyz *next;
    // create the constructure 
    xyz(int number){
        this->data=number;
        this->next=NULL;
    }
    ~xyz(){
        cout<<"distructure called for:- "<<this->data<<endl;
    }
};
void insert_at_end(xyz* &head , int data , xyz* &tail){
    // create the node
    xyz *new_nord = new xyz(data);
    if(tail==NULL){
        tail=new_nord;
    }
    else{
        while(tail!=NULL){
    cout<<"data at the tail:- "<<tail->data<<endl;
            tail=tail->next;
        }
        tail=new_nord;
    }
}
void insert_at_head(xyz* &head , int data , xyz *tail){
    // create the node 
    xyz *new_nord = new xyz(data);
    if(head==NULL){
        head=new_nord;
        tail=new_nord;
    }
    else{
        new_nord->next=head;
        head=new_nord;
    }
}
void printl(xyz *head){
    xyz *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
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
void delet_node(xyz* &head , int position , xyz* &tail ){
    // if the list is empty 
    int lenght=find_lenght(head);
    if(head==NULL){
        cout<<"no node present in the linklist"<<endl;
    }
    else if(position==1){
        xyz *temp = head;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==lenght){
        xyz *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    else{
        xyz *prev=head;
        xyz *curr=head;    // we are using the current pointer to reach the position of the node which we want to delet 
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

int main(){
    // xyz *a= new xyz(10);
    // xyz *b= new xyz(20);
    // xyz *c= new xyz(30);
    // xyz *d= new xyz(40);
    // xyz *e= new xyz(50);

    // a->next=b;
    // b->next=c;
    // c->next=d;
    // d->next=e;

    // xyz *head=a;
    // xyz *tail=NULL;
    // printl(head);
    // int data;
    // cout<<"enter the value for insertion at begening :- ";
    // cin>>data;
    xyz *head=NULL;
    xyz *tail=NULL;
    insert_at_head(head , 10 , tail);
    insert_at_head(head , 20 , tail);
    insert_at_head(head , 30 , tail);
    insert_at_head(head , 40 , tail);
    insert_at_head(head , 50 , tail);
    printl(head);
    // insert_at_end(head , data , tail);
    // printl(head);
    int position;
    cin>>position;
    delet_node(head , position , tail);
    printl(head);



}